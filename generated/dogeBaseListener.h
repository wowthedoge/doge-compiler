
// Generated from doge.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "dogeListener.h"


/**
 * This class provides an empty implementation of dogeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  dogeBaseListener : public dogeListener {
public:

  virtual void enterProgram(dogeParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(dogeParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(dogeParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(dogeParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(dogeParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(dogeParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterFunctionCall(dogeParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(dogeParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionDef(dogeParser::FunctionDefContext * /*ctx*/) override { }
  virtual void exitFunctionDef(dogeParser::FunctionDefContext * /*ctx*/) override { }

  virtual void enterLoop(dogeParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(dogeParser::LoopContext * /*ctx*/) override { }

  virtual void enterExpr(dogeParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(dogeParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

