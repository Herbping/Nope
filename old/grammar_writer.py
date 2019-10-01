from auxiliary import *
import copy

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

def write_nonTerminal(operator, bound, varList):
    result = '(' +get_NTName(bound)+ " " + get_type() +" ( 0 1 "
    for var in varList:
        result += var +" "
    result += "\n"
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
            result +="\t("+op_item[0]
            for j in range(0, opArity):
                if op_item[1][j] == Type.BOOL:
                    result += " "+get_BNTName(distr[opArity*i+j])
                else:
                    result += " "+get_NTName(distr[opArity*i+j])
            result +=")\n"
    for i in range(0,bound):
        result += "\t" +get_NTName(i) +"\n"
    return result+"))\n"

def write_grammar(operator,bound_num, varList):
    result = '('
    for i in range(0,bound_num+1):
        result += write_nonTerminal(operator, bound_num - i, varList)
    return result+")"

#_parser = initial_parser()
#_args = _parser.parse_args()
#print(_args)
#_theory = parse_theory(_args.theory)
_theory = Theory.CLIA
#_operator = parse_operator(_args.bnd_operator[0])
_operator = "ite"
#_bound_num = _args.bnd_number[0]
_bound_num = 3
_varList = ['y1','y2','k1']
print(write_grammar(_operator,_bound_num, _varList))
