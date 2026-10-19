
 


// Generated from MicroC.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MicroCParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MicroCParser.
 */
class  MicroCListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(MicroCParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(MicroCParser::ProgramContext *ctx) = 0;

  virtual void enterDecls(MicroCParser::DeclsContext *ctx) = 0;
  virtual void exitDecls(MicroCParser::DeclsContext *ctx) = 0;

  virtual void enterVar_decls(MicroCParser::Var_declsContext *ctx) = 0;
  virtual void exitVar_decls(MicroCParser::Var_declsContext *ctx) = 0;

  virtual void enterIdent(MicroCParser::IdentContext *ctx) = 0;
  virtual void exitIdent(MicroCParser::IdentContext *ctx) = 0;

  virtual void enterVar_decl(MicroCParser::Var_declContext *ctx) = 0;
  virtual void exitVar_decl(MicroCParser::Var_declContext *ctx) = 0;

  virtual void enterStr_decl(MicroCParser::Str_declContext *ctx) = 0;
  virtual void exitStr_decl(MicroCParser::Str_declContext *ctx) = 0;

  virtual void enterBase_type(MicroCParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(MicroCParser::Base_typeContext *ctx) = 0;

  virtual void enterFunction(MicroCParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(MicroCParser::FunctionContext *ctx) = 0;

  virtual void enterStatements(MicroCParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(MicroCParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(MicroCParser::StatementContext *ctx) = 0;
  virtual void exitStatement(MicroCParser::StatementContext *ctx) = 0;

  virtual void enterBase_stmt(MicroCParser::Base_stmtContext *ctx) = 0;
  virtual void exitBase_stmt(MicroCParser::Base_stmtContext *ctx) = 0;

  virtual void enterRead_stmt(MicroCParser::Read_stmtContext *ctx) = 0;
  virtual void exitRead_stmt(MicroCParser::Read_stmtContext *ctx) = 0;

  virtual void enterPrint_stmt(MicroCParser::Print_stmtContext *ctx) = 0;
  virtual void exitPrint_stmt(MicroCParser::Print_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(MicroCParser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(MicroCParser::Return_stmtContext *ctx) = 0;

  virtual void enterAssign_stmt(MicroCParser::Assign_stmtContext *ctx) = 0;
  virtual void exitAssign_stmt(MicroCParser::Assign_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(MicroCParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(MicroCParser::If_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(MicroCParser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(MicroCParser::While_stmtContext *ctx) = 0;

  virtual void enterPrimary(MicroCParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(MicroCParser::PrimaryContext *ctx) = 0;

  virtual void enterUnaryminus_expr(MicroCParser::Unaryminus_exprContext *ctx) = 0;
  virtual void exitUnaryminus_expr(MicroCParser::Unaryminus_exprContext *ctx) = 0;

  virtual void enterExpr(MicroCParser::ExprContext *ctx) = 0;
  virtual void exitExpr(MicroCParser::ExprContext *ctx) = 0;

  virtual void enterTerm(MicroCParser::TermContext *ctx) = 0;
  virtual void exitTerm(MicroCParser::TermContext *ctx) = 0;

  virtual void enterCond(MicroCParser::CondContext *ctx) = 0;
  virtual void exitCond(MicroCParser::CondContext *ctx) = 0;

  virtual void enterCmpop(MicroCParser::CmpopContext *ctx) = 0;
  virtual void exitCmpop(MicroCParser::CmpopContext *ctx) = 0;

  virtual void enterMulop(MicroCParser::MulopContext *ctx) = 0;
  virtual void exitMulop(MicroCParser::MulopContext *ctx) = 0;

  virtual void enterAddop(MicroCParser::AddopContext *ctx) = 0;
  virtual void exitAddop(MicroCParser::AddopContext *ctx) = 0;


};

