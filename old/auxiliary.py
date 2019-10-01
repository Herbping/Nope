import argparse
from enum import Enum
import copy






def initial_parser():
    parser = argparse.ArgumentParser(description='Write limited grammar consistent with given specification')
    parser.add_argument('-t', '--theory',  type=str, choices=['CLIA','BV','LIA'], default='CLIA',
                       help='specify the backgroud theory')
    parser.add_argument('--bnd-operator',  type=str, nargs = 1, default='ite',
                    help='specify the bounded operator')
    parser.add_argument('--bnd-number',  type=int, nargs = 1, default=5,
                   help='specify the bound')

    return parser

class Theory(Enum):
    CLIA = 1
    BV = 2
    LIA = 3

class Operator(Enum):
    ITE = 'ite'
    ADD = '+'
    MINUS = '-'
    MULT = '*'

class BOperator(Enum):
    AND = 'and'
    NOT = 'not'
    LE = '<='

class Type(Enum):
    INT = 'int'
    BOOL = 'bool'
    BV = 'u32'

def parse_theory(arg):
    if(arg == 'CLIA'):
        return Theory.CLIA
    if(arg == 'BV'):
        return Theory.BV
    if(arg == 'LIA'):
        return Theory.LIA



def parse_operator(arg):
    return {
        'ite': Operator.ITE,
        '+': Operator.ADD,
        '-': Operator.MINUS,
        '*': Operator.MULT,
    }[arg]

def parser_boperator(arg):
    return {
        'and' : BOperator.AND,
        'not' : BOperator.NOT,
        '<=' : BOperator.LE,
    }[arg]
