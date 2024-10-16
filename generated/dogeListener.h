
// Generated from doge.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "dogeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by dogeParser.
 */
class  dogeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(dogeParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(dogeParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(dogeParser::StatementContext *ctx) = 0;
  virtual void exitStatement(dogeParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(dogeParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(dogeParser::AssignmentContext *ctx) = 0;

  virtual void enterFunctionCall(dogeParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(dogeParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionDef(dogeParser::FunctionDefContext *ctx) = 0;
  virtual void exitFunctionDef(dogeParser::FunctionDefContext *ctx) = 0;

  virtual void enterLoop(dogeParser::LoopContext *ctx) = 0;
  virtual void exitLoop(dogeParser::LoopContext *ctx) = 0;

  virtual void enterExpr(dogeParser::ExprContext *ctx) = 0;
  virtual void exitExpr(dogeParser::ExprContext *ctx) = 0;


};

