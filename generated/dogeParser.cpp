
// Generated from doge.g4 by ANTLR 4.9.2


#include "dogeListener.h"

#include "dogeParser.h"


using namespace antlrcpp;
using namespace antlr4;

dogeParser::dogeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

dogeParser::~dogeParser() {
  delete _interpreter;
}

std::string dogeParser::getGrammarFileName() const {
  return "doge.g4";
}

const std::vector<std::string>& dogeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& dogeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

dogeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dogeParser::StatementContext *> dogeParser::ProgramContext::statement() {
  return getRuleContexts<dogeParser::StatementContext>();
}

dogeParser::StatementContext* dogeParser::ProgramContext::statement(size_t i) {
  return getRuleContext<dogeParser::StatementContext>(i);
}


size_t dogeParser::ProgramContext::getRuleIndex() const {
  return dogeParser::RuleProgram;
}

void dogeParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void dogeParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

dogeParser::ProgramContext* dogeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, dogeParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      statement();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dogeParser::T__5

    || _la == dogeParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

dogeParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dogeParser::AssignmentContext* dogeParser::StatementContext::assignment() {
  return getRuleContext<dogeParser::AssignmentContext>(0);
}

dogeParser::FunctionCallContext* dogeParser::StatementContext::functionCall() {
  return getRuleContext<dogeParser::FunctionCallContext>(0);
}

dogeParser::FunctionDefContext* dogeParser::StatementContext::functionDef() {
  return getRuleContext<dogeParser::FunctionDefContext>(0);
}

dogeParser::LoopContext* dogeParser::StatementContext::loop() {
  return getRuleContext<dogeParser::LoopContext>(0);
}


size_t dogeParser::StatementContext::getRuleIndex() const {
  return dogeParser::RuleStatement;
}

void dogeParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void dogeParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

dogeParser::StatementContext* dogeParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, dogeParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(23);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(19);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(20);
      functionCall();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(21);
      functionDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(22);
      loop();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

dogeParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dogeParser::AssignmentContext::ID() {
  return getToken(dogeParser::ID, 0);
}

dogeParser::ExprContext* dogeParser::AssignmentContext::expr() {
  return getRuleContext<dogeParser::ExprContext>(0);
}


size_t dogeParser::AssignmentContext::getRuleIndex() const {
  return dogeParser::RuleAssignment;
}

void dogeParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void dogeParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

dogeParser::AssignmentContext* dogeParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, dogeParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    match(dogeParser::ID);
    setState(26);
    match(dogeParser::T__0);
    setState(27);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

dogeParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dogeParser::FunctionCallContext::ID() {
  return getToken(dogeParser::ID, 0);
}

dogeParser::ExprContext* dogeParser::FunctionCallContext::expr() {
  return getRuleContext<dogeParser::ExprContext>(0);
}


size_t dogeParser::FunctionCallContext::getRuleIndex() const {
  return dogeParser::RuleFunctionCall;
}

void dogeParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void dogeParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

dogeParser::FunctionCallContext* dogeParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 6, dogeParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(dogeParser::ID);
    setState(30);
    match(dogeParser::T__1);
    setState(31);
    expr(0);
    setState(32);
    match(dogeParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefContext ------------------------------------------------------------------

dogeParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dogeParser::FunctionDefContext::ID() {
  return getTokens(dogeParser::ID);
}

tree::TerminalNode* dogeParser::FunctionDefContext::ID(size_t i) {
  return getToken(dogeParser::ID, i);
}

std::vector<dogeParser::StatementContext *> dogeParser::FunctionDefContext::statement() {
  return getRuleContexts<dogeParser::StatementContext>();
}

dogeParser::StatementContext* dogeParser::FunctionDefContext::statement(size_t i) {
  return getRuleContext<dogeParser::StatementContext>(i);
}


size_t dogeParser::FunctionDefContext::getRuleIndex() const {
  return dogeParser::RuleFunctionDef;
}

void dogeParser::FunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDef(this);
}

void dogeParser::FunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDef(this);
}

dogeParser::FunctionDefContext* dogeParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 8, dogeParser::RuleFunctionDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(dogeParser::ID);
    setState(35);
    match(dogeParser::T__1);
    setState(36);
    match(dogeParser::ID);
    setState(37);
    match(dogeParser::T__2);
    setState(38);
    match(dogeParser::T__3);
    setState(40); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(39);
      statement();
      setState(42); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dogeParser::T__5

    || _la == dogeParser::ID);
    setState(44);
    match(dogeParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

dogeParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dogeParser::LoopContext::ID() {
  return getTokens(dogeParser::ID);
}

tree::TerminalNode* dogeParser::LoopContext::ID(size_t i) {
  return getToken(dogeParser::ID, i);
}

dogeParser::ExprContext* dogeParser::LoopContext::expr() {
  return getRuleContext<dogeParser::ExprContext>(0);
}

std::vector<dogeParser::StatementContext *> dogeParser::LoopContext::statement() {
  return getRuleContexts<dogeParser::StatementContext>();
}

dogeParser::StatementContext* dogeParser::LoopContext::statement(size_t i) {
  return getRuleContext<dogeParser::StatementContext>(i);
}


size_t dogeParser::LoopContext::getRuleIndex() const {
  return dogeParser::RuleLoop;
}

void dogeParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void dogeParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

dogeParser::LoopContext* dogeParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 10, dogeParser::RuleLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(dogeParser::T__5);
    setState(47);
    match(dogeParser::T__1);
    setState(48);
    match(dogeParser::ID);
    setState(49);
    match(dogeParser::T__6);
    setState(50);
    match(dogeParser::ID);
    setState(51);
    match(dogeParser::T__2);
    setState(52);
    match(dogeParser::T__7);
    setState(53);
    match(dogeParser::T__1);
    setState(54);
    expr(0);
    setState(55);
    match(dogeParser::T__2);
    setState(56);
    match(dogeParser::T__3);
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(57);
      statement();
      setState(60); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dogeParser::T__5

    || _la == dogeParser::ID);
    setState(62);
    match(dogeParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

dogeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dogeParser::ExprContext *> dogeParser::ExprContext::expr() {
  return getRuleContexts<dogeParser::ExprContext>();
}

dogeParser::ExprContext* dogeParser::ExprContext::expr(size_t i) {
  return getRuleContext<dogeParser::ExprContext>(i);
}

tree::TerminalNode* dogeParser::ExprContext::ID() {
  return getToken(dogeParser::ID, 0);
}

tree::TerminalNode* dogeParser::ExprContext::INT() {
  return getToken(dogeParser::INT, 0);
}


size_t dogeParser::ExprContext::getRuleIndex() const {
  return dogeParser::RuleExpr;
}

void dogeParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void dogeParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dogeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


dogeParser::ExprContext* dogeParser::expr() {
   return expr(0);
}

dogeParser::ExprContext* dogeParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  dogeParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  dogeParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, dogeParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dogeParser::T__1: {
        setState(65);
        match(dogeParser::T__1);
        setState(66);
        expr(0);
        setState(67);
        match(dogeParser::T__2);
        break;
      }

      case dogeParser::ID: {
        setState(69);
        match(dogeParser::ID);
        break;
      }

      case dogeParser::INT: {
        setState(70);
        match(dogeParser::INT);
        break;
      }

      case dogeParser::T__12: {
        setState(71);
        match(dogeParser::T__12);
        setState(80);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << dogeParser::T__1)
          | (1ULL << dogeParser::T__12)
          | (1ULL << dogeParser::ID)
          | (1ULL << dogeParser::INT))) != 0)) {
          setState(72);
          expr(0);
          setState(77);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == dogeParser::T__6) {
            setState(73);
            match(dogeParser::T__6);
            setState(74);
            expr(0);
            setState(79);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(82);
        match(dogeParser::T__13);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(85);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(86);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << dogeParser::T__8)
          | (1ULL << dogeParser::T__9)
          | (1ULL << dogeParser::T__10)
          | (1ULL << dogeParser::T__11))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(87);
        expr(6); 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool dogeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool dogeParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> dogeParser::_decisionToDFA;
atn::PredictionContextCache dogeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN dogeParser::_atn;
std::vector<uint16_t> dogeParser::_serializedATN;

std::vector<std::string> dogeParser::_ruleNames = {
  "program", "statement", "assignment", "functionCall", "functionDef", "loop", 
  "expr"
};

std::vector<std::string> dogeParser::_literalNames = {
  "", "'='", "'('", "')'", "'{'", "'}'", "'for'", "','", "'where'", "'+'", 
  "'-'", "'*'", "'/'", "'['", "']'"
};

std::vector<std::string> dogeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", 
  "WS"
};

dfa::Vocabulary dogeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> dogeParser::_tokenNames;

dogeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x13, 0x60, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x3, 0x2, 0x6, 0x2, 0x12, 0xa, 0x2, 0xd, 
       0x2, 0xe, 0x2, 0x13, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x1a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x2b, 0xa, 0x6, 
       0xd, 0x6, 0xe, 0x6, 0x2c, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x3d, 0xa, 0x7, 0xd, 
       0x7, 0xe, 0x7, 0x3e, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4e, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
       0x51, 0xb, 0x8, 0x5, 0x8, 0x53, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x56, 
       0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x5b, 0xa, 0x8, 
       0xc, 0x8, 0xe, 0x8, 0x5e, 0xb, 0x8, 0x3, 0x8, 0x2, 0x3, 0xe, 0x9, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x3, 0x3, 0x2, 0xb, 0xe, 
       0x2, 0x64, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1f, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x24, 0x3, 0x2, 0x2, 0x2, 0xc, 0x30, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 0x11, 0x10, 
       0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 
       0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x15, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x16, 0x1a, 0x5, 0x8, 0x5, 
       0x2, 0x17, 0x1a, 0x5, 0xa, 0x6, 0x2, 0x18, 0x1a, 0x5, 0xc, 0x7, 0x2, 
       0x19, 0x15, 0x3, 0x2, 0x2, 0x2, 0x19, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x11, 0x2, 0x2, 0x1c, 0x1d, 
       0x7, 0x3, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0xe, 0x8, 0x2, 0x1e, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x11, 0x2, 0x2, 0x20, 0x21, 0x7, 
       0x4, 0x2, 0x2, 0x21, 0x22, 0x5, 0xe, 0x8, 0x2, 0x22, 0x23, 0x7, 0x5, 
       0x2, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x11, 0x2, 
       0x2, 0x25, 0x26, 0x7, 0x4, 0x2, 0x2, 0x26, 0x27, 0x7, 0x11, 0x2, 
       0x2, 0x27, 0x28, 0x7, 0x5, 0x2, 0x2, 0x28, 0x2a, 0x7, 0x6, 0x2, 0x2, 
       0x29, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 
       0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 
       0x7, 0x2, 0x2, 0x2f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x8, 
       0x2, 0x2, 0x31, 0x32, 0x7, 0x4, 0x2, 0x2, 0x32, 0x33, 0x7, 0x11, 
       0x2, 0x2, 0x33, 0x34, 0x7, 0x9, 0x2, 0x2, 0x34, 0x35, 0x7, 0x11, 
       0x2, 0x2, 0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 0x36, 0x37, 0x7, 0xa, 0x2, 
       0x2, 0x37, 0x38, 0x7, 0x4, 0x2, 0x2, 0x38, 0x39, 0x5, 0xe, 0x8, 0x2, 
       0x39, 0x3a, 0x7, 0x5, 0x2, 0x2, 0x3a, 0x3c, 0x7, 0x6, 0x2, 0x2, 0x3b, 
       0x3d, 0x5, 0x4, 0x3, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 
       0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x7, 
       0x2, 0x2, 0x41, 0xd, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x8, 0x8, 0x1, 
       0x2, 0x43, 0x44, 0x7, 0x4, 0x2, 0x2, 0x44, 0x45, 0x5, 0xe, 0x8, 0x2, 
       0x45, 0x46, 0x7, 0x5, 0x2, 0x2, 0x46, 0x56, 0x3, 0x2, 0x2, 0x2, 0x47, 
       0x56, 0x7, 0x11, 0x2, 0x2, 0x48, 0x56, 0x7, 0x12, 0x2, 0x2, 0x49, 
       0x52, 0x7, 0xf, 0x2, 0x2, 0x4a, 0x4f, 0x5, 0xe, 0x8, 0x2, 0x4b, 0x4c, 
       0x7, 0x9, 0x2, 0x2, 0x4c, 0x4e, 0x5, 0xe, 0x8, 0x2, 0x4d, 0x4b, 0x3, 
       0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 
       0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 
       0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4a, 0x3, 0x2, 0x2, 0x2, 
       0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x56, 0x7, 0x10, 0x2, 0x2, 0x55, 0x42, 0x3, 0x2, 0x2, 0x2, 0x55, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x55, 0x48, 0x3, 0x2, 0x2, 0x2, 0x55, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x56, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0xc, 
       0x7, 0x2, 0x2, 0x58, 0x59, 0x9, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x5, 0xe, 
       0x8, 0x8, 0x5a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5e, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 
       0x5d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0x13, 0x19, 0x2c, 0x3e, 0x4f, 0x52, 0x55, 0x5c, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

dogeParser::Initializer dogeParser::_init;
