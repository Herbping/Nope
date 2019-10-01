from auxiliary import *
import copy
import glob, os

#if op == Operator.NOT:
#result += "\t\t(not B"+get_NTName(r_bound) +")\n"

def get_type():
    return{
        Theory.CLIA : Type.INT.value,
        Theory.LIA : Type.INT.value,
    }[_theory]

def get_op():
    return{
        Theory.CLIA : [["ite",[Type.BOOL,Type.INT, Type.INT]], ["+",[Type.INT,Type.INT]], ["-",[Type.INT,Type.INT]] ],
        Theory.LIA : [["+",[Type.INT,Type.INT]], ["-",[Type.INT,Type.INT]] ],
    }[_theory]

def get_bop():
    return{
        Theory.CLIA : [["<=",[Type.INT,Type.INT]], ["and",[Type.BOOL,Type.BOOL]], ["not",[Type.BOOL]] ]
    }[_theory]

def get_distr(arity, sum, current_index, pattern):
    result = []
    if arity - 1 > current_index:
        for i in range(0,sum):
            tmp_pattern = copy.deepcopy(pattern)
            tmp_pattern.append(i)
            result.extend(get_distr(arity,sum-i,current_index+1,tmp_pattern))
        if sum == 0:
            tmp_pattern = copy.deepcopy(pattern)
            tmp_pattern.append(0)
            result.extend(get_distr(arity,0,current_index+1,tmp_pattern))
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
    for var in varList:
        result += var+","
    result = result[:len(result)-1]+")"
    return  result
def write_Bfunction(operator, bound, varList):
    result = 'bool ' +get_BNTName(bound)+ "("
    for var in varList:
        result+="int "+var+","
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
            if op_item[0] == "<=":
                result += "\tif (__VERIFIER_nondet_int()) {return "
                result += get_NTName(distr[opArity*i+0]) +get_application(varList)+op_item[0] + get_NTName(distr[opArity*i+1]) +get_application(varList)
                result +=";}\n"
            if op_item[0] == "and":
                result += "\tif (__VERIFIER_nondet_int()) {return "
                result += get_BNTName(distr[opArity*i+0]) +get_application(varList)+"&&" + get_BNTName(distr[opArity*i+1]) +get_application(varList)
                result +=";}\n"
            if op_item[0] == "not":
                result += "\tif (__VERIFIER_nondet_int()) {return !"
                result += get_BNTName(distr[opArity*i+0]) +get_application(varList)
                result +=";}\n"
    return result+"}\n"

def write_function(operator, bound, varList):
    result = 'int ' +get_NTName(bound)+ "("
    for var in varList:
        result+="int "+var+","
    result = result[:len(result)-1] +"){\n\tif (__VERIFIER_nondet_int()) {return 0;}\n\tif (__VERIFIER_nondet_int()) {return 1;}\n"
    for var in varList:
        result += "\tif (__VERIFIER_nondet_int()) {return "+var+";}\n"
    for i in range(0,bound):
        result += "\tif (__VERIFIER_nondet_int()) {return "+get_NTName(i)+"("
        for var in varList:
            result+=var+","
        result = result[:len(result)-1] + ");}\n"
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
                result += "\tif (__VERIFIER_nondet_int()) {return "
                result += get_NTName(distr[opArity*i+0]) +get_application(varList)+op_item[0] + get_NTName(distr[opArity*i+1]) +get_application(varList)
                result +=";}\n"
            else:

                result += "\tif ("+get_BNTName(distr[opArity*i+0])+get_application(varList)+") {return "
                result += get_NTName(distr[opArity*i+1]) +get_application(varList) +";} else {return "+ get_NTName(distr[opArity*i+2]) +get_application(varList)
                result +=";}\n"
    return result+"}\n"

def write_c(operator,bound_num, varList):
    result = "#include <stdbool.h>\n"
    for i in range(0,bound_num+1):
        result += write_Bfunction(operator, bound_num - i, varList)
    for i in range(0,bound_num+1):
        result += write_function(operator, bound_num - i, varList)
    result+="int main("
    for var in varList:
        result+="int "+var+","
    result = result[:len(result)-1] +"){ return Start("
    for var in varList:
        result+=var+","
    result = result[:len(result)-1] +");}"
    return result


#_parser = initial_parser()
#_args = _parser.parse_args()
#print(_args)
#_theory = parse_theory(_args.theory)
_theory = Theory.CLIA
#_operator = parse_operator(_args.bnd_operator[0])
_operator = "ite"
#_bound_num = _args.bnd_number[0]

os.chdir("output/CLIA_weight")
for fileName in glob.glob("*"):
    file = open(fileName, "r")
    line = file.readline()
    _bound_num = int(line.split(" ")[1]) - 1
    line = file.readline()
    _varList = line.split(" ")
    _varList = _varList[:len(_varList)-1]
    fileout = open("../../c/"+fileName[:len(fileName)-6]+"c","w")
    fileout.write(write_c(_operator,_bound_num, _varList))
