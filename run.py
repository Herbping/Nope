import sys, getopt
import subprocess
from parser.SyGuSRewritter import GRewritter
import multiprocessing
import os, time, random

def seahorn(script,return_dict):
    return_dict[0] = 1

def esolver(script,return_dict):
    while True:
        time.sleep(random.random() /20)


def main(argv):
    f = open(argv[0], "r")
    inputStr = f.read()
    ex_list = []
    print "-----log----- Start running benchmark"+argv[0]+"\n"
    while(True):
        sc_list = GRewritter(ex_list,inputStr)
        if(ex_list == []):
            temp_list = []
            for i in range(0,len(sc_list[4])):
                temp_list.append("0")
            ex_list.append(temp_list)
            
        manager = multiprocessing.Manager()
        return_dict = manager.dict()
        if len(return_dict) == 0:
            print return_dict
        

        # start seahorn and esolver
        time_start =time.time()
        p_sea = multiprocessing.Process(target=seahorn, args = (sc_list[0],return_dict))
        p_sea.start()
        p_es = multiprocessing.Process(target=esolver, args = (sc_list[1],return_dict))
        p_es.start()

        state = -1
        subResult = ""
        while(True):
            time.sleep(random.random() /20)
            if len(return_dict)!= 0:
                if return_dict.get(0)!=None:
                    state = 0
                    subResult = return_dict.get(0)
                    p_es.terminate()
                    break
                if return_dict.get(1)!=None:
                    state = 1
                    subResult = return_dict.get(1)
                    p_sea.terminate()
                    break
        print state
        if state == 0:
            print "Unrealizable!"
            
            time_end = time.time()
            print " time: "+ str(time_end-time_start) +"\n"
            print "-----log---- End\n"
            break
        candidate_solution = subResult.splitline()[1:3]

        smt_query = sc_list[2]+candidate_solution+sc_list[3]

        
    print "All END"
        
    
if __name__ == "__main__":
   main(sys.argv[1:])
