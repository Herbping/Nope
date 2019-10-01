# Generated from Sygus.g4 by ANTLR 4.5.1
from antlr4 import *
import math

# This class defines a complete generic visitor for a parse tree produced by SygusParser.


class SygusVisitor(ParseTreeVisitor):
    header = ""
    result = ""
    num_ex = 10
    # varlist of the synthFun
    varList = []

    spec = "(define-fun SPEC"
    reg_str = ""

    # example list used to subtitute constraint
    ex_list = []

    def bv_to_unsigned(self,bv):
        bv = bv[2:]
        result = 0
        for i in range(0,8):
            result += math.pow(16,7-i) * self.hex_to_dec(bv[i])
        return result

    def get_application_def(self):
        result = "("
        for i in range(0,self.num_ex):
            for var in self.varList:
                result+=self.type + " " +var+"_"+str(i)+","
        result = result[:len(result)-1]+")"
        return  result



    def get_application(self):
        result = "("
        for i in range(0,self.num_ex):
            for var in self.varList:
                result+=var+"_"+str(i)+","
        result = result[:len(result)-1]+")"
        return  result

    def get_application_I(self,i):
        result = "("
        for var in self.varList:
            result+=var+"_"+str(i)+","
        result = result[:len(result)-1]+",I_"+str(i)+")"
        return  result

    def get_application_def_I(self):
        result ="("
        for var in self.varList:
            result+=self.type + " " +var+","
        result = result[:len(result)-1]+"," + self.type + " f)"
        return  result

    def get_application_spec(self):
        result ="("
        for var in self.spec_varlist:
            result+=self.type + " " +var+","
        result = result[:len(result)-1]+"," + self.type + " f_OUT)"
        return  result


    # Visit a parse tree produced by SygusParser#start.
    def visitStart(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#prog.
    def visitProg(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#setLogicCmd.
    def visitSetLogicCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#weightPlus.
    def visitWeightPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#weight.
    def visitWeight(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#setWeightCmd.
    def visitSetWeightCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#cmdPlus.
    def visitCmdPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#cmd.
    def visitCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#weightOptimizationCmd.
    def visitWeightOptimizationCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#weightPair.
    def visitWeightPair(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#weightConstraintCmd.
    def visitWeightConstraintCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#varDeclCmd.
    def visitVarDeclCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#sortDefCmd.
    def visitSortDefCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#sortExpr.
    def visitSortExpr(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#boolConst.
    def visitBoolConst(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#enumConst.
    def visitEnumConst(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#ecList.
    def visitEcList(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#symbolPlus.
    def visitSymbolPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#setOptsCmd.
    def visitSetOptsCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#optList.
    def visitOptList(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#symbolPairPlus.
    def visitSymbolPairPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#symbolPair.
    def visitSymbolPair(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#funDefCmd.
    def visitFunDefCmd(self, ctx):
	    self.header = self.header + "( define-fun " + ctx.SYMBOL().getText() 
        self.reg_str = " "
        self.visitChildren(ctx)
        self.header += self.reg_str + ")"
        return ""


    # Visit a parse tree produced by SygusParser#funDeclCmd.
    def visitFunDeclCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#sortStar.
    def visitSortStar(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#argList.
    def visitArgList(self, ctx):
        self.reg_str += "("
        self.visitChildren(ctx)
        self.reg_str += ") "
        return ""


    # Visit a parse tree produced by SygusParser#symbolSortPairStar.
    def visitSymbolSortPairStar(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#symbolSortPair.
    def visitSymbolSortPair(self, ctx):
        self.reg_str += "(" + ctx.SYMBOL().getText() + " " + ctx.sortExpr().getText()+")"
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#application.
    def visitApplication(self, ctx):
        self.reg_str += "(" +ctx.SYMBOL().getText()
        self.visitChildren(ctx)
        self.reg_str += ") " 
        return 1

    # Visit a parse tree produced by SygusParser#liter.
    def visitLiter(self, ctx):
        self.reg_str += ctx.literal().getText() +" "
        return 1


    # Visit a parse tree produced by SygusParser#symbol.
    def visitSymbol(self, ctx):
        self.reg_str += ctx.SYMBOL().getText() +" "
        return 1


    # Visit a parse tree produced by SygusParser#let.
    def visitLet(self, ctx):
        return 1

    # Visit a parse tree produced by SygusParser#letTerm.
    def visitLetTerm(self, ctx):
        return self.visit(ctx.term())


    # Visit a parse tree produced by SygusParser#letBindingTermPlus.
    def visitLetBindingTermPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#letBindingTerm.
    def visitLetBindingTerm(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#termStar.
    def visitTermStar(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#literal.
    def visitLiteral(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#ntDefPlus.
    def visitNtDefPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#ntDef.
    def visitNtDef(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#gTermPlus.
    def visitGTermPlus(self, ctx):

        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#checkSynthCmd.
    def visitCheckSynthCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#constraintCmd.
    def visitConstraintCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#synthFunCmd.
    def visitSynthFunCmd(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#gTermWeighted.
    def visitGTermWeighted(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#literalPlus.
    def visitLiteralPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#gTerm.
    def visitGTerm(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#letGTerm.
    def visitLetGTerm(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#letBindingGTermPlus.
    def visitLetBindingGTermPlus(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#letBindingGTerm.
    def visitLetBindingGTerm(self, ctx):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by SygusParser#gTermStar.
    def visitGTermStar(self, ctx):
        return self.visitChildren(ctx)

