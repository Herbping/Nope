from auxiliary import *
from restricted_writer import *
import copy
import glob, os

#if op == Operator.NOT:
#result += "\t\t(not B"+get_NTName(r_bound) +")\n"
def get_distr(arity, sum, current_index, pattern):
    result = []
    if arity - 1 > current_index:
        if sum == 0:
            tmp_pattern = copy.deepcopy(pattern)
            tmp_pattern.append(0)
            result.extend(get_distr(arity,0,current_index+1,tmp_pattern))
        else:
            for i in range(0,sum+1):
                tmp_pattern = copy.deepcopy(pattern)
                tmp_pattern.append(i)
                result.extend(get_distr(arity,sum-i,current_index+1,tmp_pattern))
        return result
    else:
        tmp_pattern = copy.deepcopy(pattern)
        tmp_pattern.append(sum)
        return tmp_pattern


def get_NTName(bound):
    if bound == _bound_num:
        return 'Start'
    else:
        return 'NT_'+str(bound)

def get_BNTName(bound):
    return 'BNT_'+str(bound)

def get_application(varList):
    result = "("
    for i in range(0,_num_cex):
        for var in varList:
            result+=var+"_"+str(i)+","
    result = result[:len(result)-1]+")"
    return  result

def get_application_par(varList,i):
    result = "("
    for var in varList:
        result+=var+"_"+str(i)+","
    result = result[:len(result)-1]+")"
    return  result

def get_application_par_I(varList,i):
    result = "("
    for var in varList:
        result+=var+"_"+str(i)+","
    result += "I_"+str(i)+")"
    return  result

def get_type():
    return{
        Theory.CLIA : Type.INT.value,
        Theory.LIA : Type.INT.value,
        Theory.BV : Type.BV.value,
    }[_theory]

def get_op():
    return{
        Theory.CLIA : [["ite",[Type.BOOL,Type.INT, Type.INT]], ["+",[Type.INT,Type.INT]] ],
        Theory.LIA : [["+",[Type.INT,Type.INT]], ["-",[Type.INT,Type.INT]] ],
        Theory.BV : [["bvxor",[Type.BV,Type.BV]],["bvand",[Type.BV,Type.BV]],["bvor",[Type.BV,Type.BV]]] #here
    }[_theory]

def get_bop():
    return{
        Theory.CLIA : [["<=",[Type.INT,Type.INT]],["==",[Type.INT,Type.INT]], ["and",[Type.BOOL,Type.BOOL]], ["not",[Type.BOOL]] ]
    }[_theory]
def write_Bfunction(operator, bound, varList):
    result = 'bool ' +get_BNTName(bound)+ "("
    for i in range(0,_num_cex):
        for var in varList:
            result+="int "+var+"_"+str(i)+","
    result = result[:len(result)-1]+"){\n"
    opList = get_bop()
    for op_item in opList:
        r_bound = bound                 # remaining bound
        if op_item[0] == operator:
            r_bound = r_bound - 1
        if r_bound == -1:
            continue
        opArity = len(op_item[1])
        distr = get_distr(opArity,r_bound,0,[])
        num_rule = len(distr)/opArity
        for i in range(0,num_rule):
            if op_item[0] == "<=" or op_item[0] == "==":
		if i == num_rule -1 and op_item == opList[len(opList)-1]:
			result += "\telse{\n"
		else:
                	result += "\tif (__VERIFIER_nondet_int()) {\n"

                result += "\t\t"+get_NTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempL_"+str(j)+" = I_"+str(j)+";\n"

                result += "\t\t"+get_NTName(distr[opArity*i+1]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempR_"+str(j)+" = I_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tB_"+str(j)+" = tempL_"+str(j)+op_item[0]+"tempR_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
            if op_item[0] == "and":
		if i == num_rule -1 and op_item == opList[len(opList)-1]:
			result += "\telse{\n"
		else:
                	result += "\tif (__VERIFIER_nondet_int()) {\n"

                result += "\t\t"+get_BNTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tbool tempL_"+str(j)+" = B_"+str(j)+";\n"

                result += "\t\t"+get_BNTName(distr[opArity*i+1]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tbool tempR_"+str(j)+" = B_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tB_"+str(j)+" = tempL_"+str(j)+"&&"+"tempR_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
            if op_item[0] == "not":
		if i == num_rule -1 and op_item == opList[len(opList)-1]:
			result += "\telse{\n"
		else:
                	result += "\tif (__VERIFIER_nondet_int()) {\n"

                result += "\t\t"+get_BNTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tbool tempL_"+str(j)+" = B_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tB_"+str(j)+" = !tempL_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
    return result+"}\n"

def write_function(operator, bound, varList):
    result = get_type()+" " +get_NTName(bound)+ "("
    for i in range(0,_num_cex):
        for var in varList:
            result+=get_type()+" "+var+"_"+str(i)+","
    result = result[:len(result)-1] +"){\n\tif (__VERIFIER_nondet_int()) {\n"

    for i in range(0,_num_cex):
        result += "\t\tI_"+str(i)+" = 0;\n"
    result += "\t\treturn -1;}\n\tif (__VERIFIER_nondet_int()) {\n"

    for i in range(0,_num_cex):
        result += "\t\tI_"+str(i)+" = 1;\n"
    result += "\t\treturn -1;}\n"
    for var in varList:
        result += "\tif (__VERIFIER_nondet_int()) {\n"
        for i in range(0,_num_cex):
            result += "\t\tI_"+str(i)+" = "+var+"_"+str(i)+";\n"
        result += "\t\treturn -1;}\n"
    for i in range(0,bound):
        result += "\tif (__VERIFIER_nondet_int()) {\n\t\t"+get_NTName(i)+"("
        for i in range(0,_num_cex):
            for var in varList:
                result+=var+"_"+str(i)+","
        result = result[:len(result)-1] + ");\n\t\treturn -1;}\n"
    opList = get_op()
    for op_item in opList:
        r_bound = bound                 # remaining bound
        if op_item[0] == operator:
            r_bound = r_bound - 1
        if r_bound == -1:
            continue
        opArity = len(op_item[1])
        distr = get_distr(opArity,r_bound,0,[])
        num_rule = len(distr)/opArity
        for i in range(0,num_rule):
            if op_item[0] != "ite":
		if i == num_rule -1 and op_item == opList[len(opList)-1]:
			result += "\telse{\n"
		else:
                	result += "\tif (__VERIFIER_nondet_int()) {\n"
                result += "\t\t" +get_NTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\t " + get_type()+" tempL_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_NTName(distr[opArity*i+1]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\t " + get_type()+" tempR_"+str(j)+"=I_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tI_"+str(j)+" = tempL_"+str(j)+op_item[0]+"tempR_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
            else:
		if i == num_rule -1 and op_item == opList[len(opList)-1]:
			result += "\telse{\n"
		else:
                	result += "\tif (__VERIFIER_nondet_int()) {\n"
		
                result += "\t\t" +get_NTName(distr[opArity*i+1]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\t " + get_type()+" tempL_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_NTName(distr[opArity*i+2]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\t " + get_type()+" tempR_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_BNTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tbool tempB_"+str(j)+"=B_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tif(tempB_"+str(j)+") I_"+str(j)+" = tempL_"+str(j)+"; else I_"+str(j)+" = tempR_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
    return result+"}\n"

def write_c(operator,bound_num, varList):
    result = "typedef _Bool bool;\ntypedef unsigned  " + get_type()+" u32;\nextern void __VERIFIER_error (void);\nextern void __VERIFIER_assume (int);\nextern "+get_type()+" __VERIFIER_nondet_int();\n"
    for i in range(0, _num_cex):
        result += get_type()+" I_"+ str(i) + " = -1;\n"
        result += "bool B_" + str(i) + " = 0;\n"

    for i in range(0,bound_num+1):
    	result += get_type()+ ' ' +get_NTName(bound_num - i)+ "("
    	for j in range(0,_num_cex):
        	for var in varList:
        	    result+=get_type()+" "+var+"_"+str(j)+","
    	result = result[:len(result)-1] +");\n"
	result += 'bool ' +get_BNTName(bound_num - i)+ "("
   	for j in range(0,_num_cex):
   	     for var in varList:
   	         result+=get_type()+" "+var+"_"+str(j)+","
   	result = result[:len(result)-1]+");\n"

    for i in range(0,bound_num+1):
        result += write_Bfunction(operator, bound_num - i, varList)
    for i in range(0,bound_num+1):
        result += write_function(operator, bound_num - i, varList)
    result+="int main(){\n"
    for i in range(0,_num_cex):
        for var in varList:
            result += "\t"+get_type()+" "+var+"_"+str(i)+" = ;\n"
    result += "\t"+get_NTName(0) +get_application(varList)+";\n"
    for i in range(0,_num_cex):
        result += "\tbool spec_out_"+str(i)+" = spec"+get_application_par_I(varList,i)+";\n"
    result += "\t(void)(("
    for i in range(0,_num_cex):
        result += "!spec_out_"+str(i) +"||"
    result = result[0:len(result)-2]+")||(__VERIFIER_error (), 0));\n"
    return result+"}"

'''
def write_restricted(operator,bound_num, varList):
    result = "#include <stdbool.h>\n"
    for i in range(0, _num_cex):
        result += "int I_"+ str(i) + " = -1;\n"
        result += "bool B_" + str(i) + " = 0;\n"

    for i in range(0,bound_num+1):
        result += write_restricted_function(operator, bound_num - i, varList)
    result+="int main(){\n"
    for i in range(0,_num_cex):
        for var in varList:
            result += "\tint "+var+"_"+str(i)+" = __VERIFIER_nondet_int();\n"
    result += "\tStart"+get_application(varList)+";\n"
    for i in range(0,_num_cex):
        result += "\tbool spec_out_"+str(i)+" = spec"+get_application_par_I(varList,i)+";\n"
    result += "\t__VERIFIER_assert("
    for i in range(0,_num_cex):
        result += "I_"+str(i)+"!=spec_out_"+str(i) +"||"
    result = result[0:len(result)-2]+");\n"
    return result+"}"
'''

#_parser = initial_parser()
#_args = _parser.parse_args()
#print(_args)
#_theory = parse_theory(_args.theory)
_theory = Theory.CLIA
#_operator = parse_operator(_args.bnd_operator[0])
_operator = "ite"
#_bound_num = _args.bnd_number[0]
_num_cex = 17

os.chdir("output/CLIA_weight")
for fileName in glob.glob("*"):
    file = open(fileName, "r")
    line = file.readline()
    _bound_num = int(line.split(" ")[1]) - 1
    line = file.readline()
    _varList = line.split(" ")
    _varList = _varList[:len(_varList)-1]
    directory = "../../cex/"+str(_num_cex)+"/"
    if not os.path.exists(directory):
        os.makedirs(directory)
    fileout = open(directory+fileName[:len(fileName)-6]+"c","w")
    fileout.write(write_c(_operator,_bound_num, _varList))
