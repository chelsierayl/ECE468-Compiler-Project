
 


// Generated from MicroC.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MicroCListener.h"


/**
 * This class provides an empty implementation of MicroCListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MicroCBaseListener : public MicroCListener {
public:

  virtual void enterProgram(MicroCParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(MicroCParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDecls(MicroCParser::DeclsContext * /*ctx*/) override { }
  virtual void exitDecls(MicroCParser::DeclsContext * /*ctx*/) override { }

  virtual void enterVar_decls(MicroCParser::Var_declsContext * /*ctx*/) override { }
  virtual void exitVar_decls(MicroCParser::Var_declsContext * /*ctx*/) override { }

  virtual void enterIdent(MicroCParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(MicroCParser::IdentContext * /*ctx*/) override { }

  virtual void enterVar_decl(MicroCParser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(MicroCParser::Var_declContext * /*ctx*/) override { }

  virtual void enterStr_decl(MicroCParser::Str_declContext * /*ctx*/) override { }
  virtual void exitStr_decl(MicroCParser::Str_declContext * /*ctx*/) override { }

  virtual void enterBase_type(MicroCParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(MicroCParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterFunction(MicroCParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(MicroCParser::FunctionContext * /*ctx*/) override { }

  virtual void enterStatements(MicroCParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(MicroCParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(MicroCParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MicroCParser::StatementContext * /*ctx*/) override { }

  virtual void enterBase_stmt(MicroCParser::Base_stmtContext * /*ctx*/) override { }
  virtual void exitBase_stmt(MicroCParser::Base_stmtContext * /*ctx*/) override { }

  virtual void enterRead_stmt(MicroCParser::Read_stmtContext * /*ctx*/) override { }
  virtual void exitRead_stmt(MicroCParser::Read_stmtContext * /*ctx*/) override { }

  virtual void enterPrint_stmt(MicroCParser::Print_stmtContext * /*ctx*/) override { }
  virtual void exitPrint_stmt(MicroCParser::Print_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(MicroCParser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(MicroCParser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterAssign_stmt(MicroCParser::Assign_stmtContext * /*ctx*/) override { }
  virtual void exitAssign_stmt(MicroCParser::Assign_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(MicroCParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(MicroCParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(MicroCParser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(MicroCParser::While_stmtContext * /*ctx*/) override { }

  virtual void enterPrimary(MicroCParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(MicroCParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterUnaryminus_expr(MicroCParser::Unaryminus_exprContext * /*ctx*/) override { }
  virtual void exitUnaryminus_expr(MicroCParser::Unaryminus_exprContext * /*ctx*/) override { }

  virtual void enterExpr(MicroCParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(MicroCParser::ExprContext * /*ctx*/) override { }

  virtual void enterTerm(MicroCParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(MicroCParser::TermContext * /*ctx*/) override { }

  virtual void enterCond(MicroCParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(MicroCParser::CondContext * /*ctx*/) override { }

  virtual void enterCmpop(MicroCParser::CmpopContext * /*ctx*/) override { }
  virtual void exitCmpop(MicroCParser::CmpopContext * /*ctx*/) override { }

  virtual void enterMulop(MicroCParser::MulopContext * /*ctx*/) override { }
  virtual void exitMulop(MicroCParser::MulopContext * /*ctx*/) override { }

  virtual void enterAddop(MicroCParser::AddopContext * /*ctx*/) override { }
  virtual void exitAddop(MicroCParser::AddopContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

