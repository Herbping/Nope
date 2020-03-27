import sys, getopt
import subprocess
from parser.SyGuSRewritter import GRewritter
from parser.z3outputparser import z3Parser
import multiprocessing
import os, time, random
from signal import signal, SIGPIPE, SIG_DFL

from random import randint
signal(SIGPIPE,SIG_DFL)

fname = ""

def seahorn(script,return_dict):
    global fname
    os.path.expandvars("$PATH")
    outname = "c/"+"tmp.i"
    f = open(outname,"w+")
    f.write(script)
    f.close()
    output = subprocess.check_output(["sudo", "docker", "run", "-v", "/home/qhu28/PLDI2020_artifact/Nope:/host", "-it", "seahorn/seahorn", "timeout", "600",  "sea","pf","/host/"+outname])
    split = output.splitlines()
   
    if "unsat" in split:
	return_dict[0] = 1
    else:
	return_dict[0] = 0
	

def main(argv):
    global fname
   
    outname = "result.txt"
    with open(outname, "a+") as fout:
	fout.write("\n"+argv[0])
	fout.close()
    fname = argv[0]
    f = open(argv[0], "r")
    inputStr = f.read()
    f.close()
    f_ex = open(argv[1], "r")
    exLines = f_ex.readlines()[1:]
    #print exLines

    ex_list = []
    ex_out_list = []
    length = 0
    for line in exLines:
	line = line.split()
	length = len(line)-1
	ex_list.append(line[:-1])
	ex_out_list.append(line[-1])
    #print ex_list
    #print ex_out_list

    time_start =time.time()

    while True:
	    sc_list = GRewritter(ex_list,inputStr,ex_out_list)
            
	    manager = multiprocessing.Manager()
	    return_dict = manager.dict()
	    #print sc_list[0]

	    # start seahorn 
	    p_sea = multiprocessing.Process(target=seahorn, args = (sc_list[0],return_dict))
	    p_sea.start()

	    state = -1
	    subResult = ""
	    p_sea.join()
            
	    time_end = time.time()
	    if (time_end-time_start)>600:

		with open(outname, "a+") as fout:
			fout.write("\t" + str(time_end-time_start) + "\tTimeout")
			fout.close()
		return
	    if return_dict[0] == 1:
		print "Unrealizable!"    
		with open(outname, "a+") as fout:
			fout.write("\t" + str(time_end-time_start) + "\tUnrealizable")
			fout.close()
		return
	    else:
		tmp_list = []
		for i in range(0,length):
			tmp_list.append(str(randint(-50,50)))
		ex_list.append(tmp_list)
		ex_out_list.append(str(randint(-50,50)))

        
    
if __name__ == "__main__":
   main(sys.argv[1:])
