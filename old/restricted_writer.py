from auxiliary import *
import copy
import glob, os

def write_restricted_function(operator, bound, varList):
    result = 'int ' +get_NTName(bound)+ "("
    for i in range(0,_num_cex):
        for var in varList:
            result+="int "+var+"_"+str(i)+","
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
                result += "\tif (__VERIFIER_nondet_int()) {\n"
                result += "\t\t" +get_NTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempL_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_NTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempR_"+str(j)+"=I_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tI_"+str(j)+" = tempL_"+str(j)+op_item[0]+"tempR_"+str(j)+";\n"
                result +="\t\treturn -1;}\n"
            else:
                result += "\tif (__VERIFIER_nondet_int()){\n"

                result += "\t\t" +get_NTName(distr[opArity*i+1]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempL_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_NTName(distr[opArity*i+2]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tint tempR_"+str(j)+"=I_"+str(j)+";\n"

                result += "\t\t" +get_BNTName(distr[opArity*i+0]) +get_application(varList)+";\n"
                for j in range(0,_num_cex):
                    result += "\t\tbool tempB_"+str(j)+"=B_"+str(j)+";\n"

                for j in range(0,_num_cex):
                    result += "\t\tif(tempB_"+str(j)+") I_"+str(j)+" = tempL_"+str(j)+"; else I_"+str(j)+" = tempR_"+str(j)+";\n"
                result +="\t\treturn -1}\n"
    return result+"}\n"
