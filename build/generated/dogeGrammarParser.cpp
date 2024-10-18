
// Generated from dogeGrammar.g4 by ANTLR 4.13.2



#include "dogeGrammarParser.h"


using namespace antlrcpp;
using namespace customlanguage;

using namespace antlr4;

namespace {

struct DogeGrammarParserStaticData final {
  DogeGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DogeGrammarParserStaticData(const DogeGrammarParserStaticData&) = delete;
  DogeGrammarParserStaticData(DogeGrammarParserStaticData&&) = delete;
  DogeGrammarParserStaticData& operator=(const DogeGrammarParserStaticData&) = delete;
  DogeGrammarParserStaticData& operator=(DogeGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dogegrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DogeGrammarParserStaticData> dogegrammarParserStaticData = nullptr;

void dogegrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (dogegrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(dogegrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DogeGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "assignment", "functionCall", "functionDef", 
      "loop", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'{'", "'}'", "'for'", "','", "'where'", 
      "'+'", "'-'", "'*'", "'/'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", 
      "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,94,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	4,0,16,8,0,11,0,12,0,17,1,1,1,1,1,1,1,1,3,1,24,8,1,1,2,1,2,1,2,1,2,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,4,4,41,8,4,11,4,12,4,42,1,4,
  	1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,4,5,59,8,5,11,5,12,
  	5,60,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,76,8,6,10,
  	6,12,6,79,9,6,3,6,81,8,6,1,6,3,6,84,8,6,1,6,1,6,1,6,5,6,89,8,6,10,6,12,
  	6,92,9,6,1,6,0,1,12,7,0,2,4,6,8,10,12,0,1,1,0,9,12,98,0,15,1,0,0,0,2,
  	23,1,0,0,0,4,25,1,0,0,0,6,29,1,0,0,0,8,34,1,0,0,0,10,46,1,0,0,0,12,83,
  	1,0,0,0,14,16,3,2,1,0,15,14,1,0,0,0,16,17,1,0,0,0,17,15,1,0,0,0,17,18,
  	1,0,0,0,18,1,1,0,0,0,19,24,3,4,2,0,20,24,3,6,3,0,21,24,3,8,4,0,22,24,
  	3,10,5,0,23,19,1,0,0,0,23,20,1,0,0,0,23,21,1,0,0,0,23,22,1,0,0,0,24,3,
  	1,0,0,0,25,26,5,15,0,0,26,27,5,1,0,0,27,28,3,12,6,0,28,5,1,0,0,0,29,30,
  	5,15,0,0,30,31,5,2,0,0,31,32,3,12,6,0,32,33,5,3,0,0,33,7,1,0,0,0,34,35,
  	5,15,0,0,35,36,5,2,0,0,36,37,5,15,0,0,37,38,5,3,0,0,38,40,5,4,0,0,39,
  	41,3,2,1,0,40,39,1,0,0,0,41,42,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,
  	44,1,0,0,0,44,45,5,5,0,0,45,9,1,0,0,0,46,47,5,6,0,0,47,48,5,2,0,0,48,
  	49,5,15,0,0,49,50,5,7,0,0,50,51,5,15,0,0,51,52,5,3,0,0,52,53,5,8,0,0,
  	53,54,5,2,0,0,54,55,3,12,6,0,55,56,5,3,0,0,56,58,5,4,0,0,57,59,3,2,1,
  	0,58,57,1,0,0,0,59,60,1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,62,1,0,0,
  	0,62,63,5,5,0,0,63,11,1,0,0,0,64,65,6,6,-1,0,65,66,5,2,0,0,66,67,3,12,
  	6,0,67,68,5,3,0,0,68,84,1,0,0,0,69,84,5,15,0,0,70,84,5,16,0,0,71,80,5,
  	13,0,0,72,77,3,12,6,0,73,74,5,7,0,0,74,76,3,12,6,0,75,73,1,0,0,0,76,79,
  	1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,80,72,
  	1,0,0,0,80,81,1,0,0,0,81,82,1,0,0,0,82,84,5,14,0,0,83,64,1,0,0,0,83,69,
  	1,0,0,0,83,70,1,0,0,0,83,71,1,0,0,0,84,90,1,0,0,0,85,86,10,5,0,0,86,87,
  	7,0,0,0,87,89,3,12,6,6,88,85,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,
  	1,0,0,0,91,13,1,0,0,0,92,90,1,0,0,0,8,17,23,42,60,77,80,83,90
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dogegrammarParserStaticData = std::move(staticData);
}

}

dogeGrammarParser::dogeGrammarParser(TokenStream *input) : dogeGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

dogeGrammarParser::dogeGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  dogeGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *dogegrammarParserStaticData->atn, dogegrammarParserStaticData->decisionToDFA, dogegrammarParserStaticData->sharedContextCache, options);
}

dogeGrammarParser::~dogeGrammarParser() {
  delete _interpreter;
}

const atn::ATN& dogeGrammarParser::getATN() const {
  return *dogegrammarParserStaticData->atn;
}

std::string dogeGrammarParser::getGrammarFileName() const {
  return "dogeGrammar.g4";
}

const std::vector<std::string>& dogeGrammarParser::getRuleNames() const {
  return dogegrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& dogeGrammarParser::getVocabulary() const {
  return dogegrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dogeGrammarParser::getSerializedATN() const {
  return dogegrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

dogeGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dogeGrammarParser::StatementContext *> dogeGrammarParser::ProgramContext::statement() {
  return getRuleContexts<dogeGrammarParser::StatementContext>();
}

dogeGrammarParser::StatementContext* dogeGrammarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<dogeGrammarParser::StatementContext>(i);
}


size_t dogeGrammarParser::ProgramContext::getRuleIndex() const {
  return dogeGrammarParser::RuleProgram;
}


dogeGrammarParser::ProgramContext* dogeGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, dogeGrammarParser::RuleProgram);
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
    } while (_la == dogeGrammarParser::T__5

    || _la == dogeGrammarParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

dogeGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dogeGrammarParser::AssignmentContext* dogeGrammarParser::StatementContext::assignment() {
  return getRuleContext<dogeGrammarParser::AssignmentContext>(0);
}

dogeGrammarParser::FunctionCallContext* dogeGrammarParser::StatementContext::functionCall() {
  return getRuleContext<dogeGrammarParser::FunctionCallContext>(0);
}

dogeGrammarParser::FunctionDefContext* dogeGrammarParser::StatementContext::functionDef() {
  return getRuleContext<dogeGrammarParser::FunctionDefContext>(0);
}

dogeGrammarParser::LoopContext* dogeGrammarParser::StatementContext::loop() {
  return getRuleContext<dogeGrammarParser::LoopContext>(0);
}


size_t dogeGrammarParser::StatementContext::getRuleIndex() const {
  return dogeGrammarParser::RuleStatement;
}


dogeGrammarParser::StatementContext* dogeGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, dogeGrammarParser::RuleStatement);

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

dogeGrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dogeGrammarParser::AssignmentContext::ID() {
  return getToken(dogeGrammarParser::ID, 0);
}

dogeGrammarParser::ExprContext* dogeGrammarParser::AssignmentContext::expr() {
  return getRuleContext<dogeGrammarParser::ExprContext>(0);
}


size_t dogeGrammarParser::AssignmentContext::getRuleIndex() const {
  return dogeGrammarParser::RuleAssignment;
}


dogeGrammarParser::AssignmentContext* dogeGrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, dogeGrammarParser::RuleAssignment);

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
    match(dogeGrammarParser::ID);
    setState(26);
    match(dogeGrammarParser::T__0);
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

dogeGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dogeGrammarParser::FunctionCallContext::ID() {
  return getToken(dogeGrammarParser::ID, 0);
}

dogeGrammarParser::ExprContext* dogeGrammarParser::FunctionCallContext::expr() {
  return getRuleContext<dogeGrammarParser::ExprContext>(0);
}


size_t dogeGrammarParser::FunctionCallContext::getRuleIndex() const {
  return dogeGrammarParser::RuleFunctionCall;
}


dogeGrammarParser::FunctionCallContext* dogeGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 6, dogeGrammarParser::RuleFunctionCall);

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
    match(dogeGrammarParser::ID);
    setState(30);
    match(dogeGrammarParser::T__1);
    setState(31);
    expr(0);
    setState(32);
    match(dogeGrammarParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefContext ------------------------------------------------------------------

dogeGrammarParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dogeGrammarParser::FunctionDefContext::ID() {
  return getTokens(dogeGrammarParser::ID);
}

tree::TerminalNode* dogeGrammarParser::FunctionDefContext::ID(size_t i) {
  return getToken(dogeGrammarParser::ID, i);
}

std::vector<dogeGrammarParser::StatementContext *> dogeGrammarParser::FunctionDefContext::statement() {
  return getRuleContexts<dogeGrammarParser::StatementContext>();
}

dogeGrammarParser::StatementContext* dogeGrammarParser::FunctionDefContext::statement(size_t i) {
  return getRuleContext<dogeGrammarParser::StatementContext>(i);
}


size_t dogeGrammarParser::FunctionDefContext::getRuleIndex() const {
  return dogeGrammarParser::RuleFunctionDef;
}


dogeGrammarParser::FunctionDefContext* dogeGrammarParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 8, dogeGrammarParser::RuleFunctionDef);
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
    match(dogeGrammarParser::ID);
    setState(35);
    match(dogeGrammarParser::T__1);
    setState(36);
    match(dogeGrammarParser::ID);
    setState(37);
    match(dogeGrammarParser::T__2);
    setState(38);
    match(dogeGrammarParser::T__3);
    setState(40); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(39);
      statement();
      setState(42); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dogeGrammarParser::T__5

    || _la == dogeGrammarParser::ID);
    setState(44);
    match(dogeGrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

dogeGrammarParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> dogeGrammarParser::LoopContext::ID() {
  return getTokens(dogeGrammarParser::ID);
}

tree::TerminalNode* dogeGrammarParser::LoopContext::ID(size_t i) {
  return getToken(dogeGrammarParser::ID, i);
}

dogeGrammarParser::ExprContext* dogeGrammarParser::LoopContext::expr() {
  return getRuleContext<dogeGrammarParser::ExprContext>(0);
}

std::vector<dogeGrammarParser::StatementContext *> dogeGrammarParser::LoopContext::statement() {
  return getRuleContexts<dogeGrammarParser::StatementContext>();
}

dogeGrammarParser::StatementContext* dogeGrammarParser::LoopContext::statement(size_t i) {
  return getRuleContext<dogeGrammarParser::StatementContext>(i);
}


size_t dogeGrammarParser::LoopContext::getRuleIndex() const {
  return dogeGrammarParser::RuleLoop;
}


dogeGrammarParser::LoopContext* dogeGrammarParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 10, dogeGrammarParser::RuleLoop);
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
    match(dogeGrammarParser::T__5);
    setState(47);
    match(dogeGrammarParser::T__1);
    setState(48);
    match(dogeGrammarParser::ID);
    setState(49);
    match(dogeGrammarParser::T__6);
    setState(50);
    match(dogeGrammarParser::ID);
    setState(51);
    match(dogeGrammarParser::T__2);
    setState(52);
    match(dogeGrammarParser::T__7);
    setState(53);
    match(dogeGrammarParser::T__1);
    setState(54);
    expr(0);
    setState(55);
    match(dogeGrammarParser::T__2);
    setState(56);
    match(dogeGrammarParser::T__3);
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(57);
      statement();
      setState(60); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == dogeGrammarParser::T__5

    || _la == dogeGrammarParser::ID);
    setState(62);
    match(dogeGrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

dogeGrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dogeGrammarParser::ExprContext *> dogeGrammarParser::ExprContext::expr() {
  return getRuleContexts<dogeGrammarParser::ExprContext>();
}

dogeGrammarParser::ExprContext* dogeGrammarParser::ExprContext::expr(size_t i) {
  return getRuleContext<dogeGrammarParser::ExprContext>(i);
}

tree::TerminalNode* dogeGrammarParser::ExprContext::ID() {
  return getToken(dogeGrammarParser::ID, 0);
}

tree::TerminalNode* dogeGrammarParser::ExprContext::INT() {
  return getToken(dogeGrammarParser::INT, 0);
}


size_t dogeGrammarParser::ExprContext::getRuleIndex() const {
  return dogeGrammarParser::RuleExpr;
}



dogeGrammarParser::ExprContext* dogeGrammarParser::expr() {
   return expr(0);
}

dogeGrammarParser::ExprContext* dogeGrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  dogeGrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  dogeGrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, dogeGrammarParser::RuleExpr, precedence);

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
      case dogeGrammarParser::T__1: {
        setState(65);
        match(dogeGrammarParser::T__1);
        setState(66);
        expr(0);
        setState(67);
        match(dogeGrammarParser::T__2);
        break;
      }

      case dogeGrammarParser::ID: {
        setState(69);
        match(dogeGrammarParser::ID);
        break;
      }

      case dogeGrammarParser::INT: {
        setState(70);
        match(dogeGrammarParser::INT);
        break;
      }

      case dogeGrammarParser::T__12: {
        setState(71);
        match(dogeGrammarParser::T__12);
        setState(80);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 106500) != 0)) {
          setState(72);
          expr(0);
          setState(77);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == dogeGrammarParser::T__6) {
            setState(73);
            match(dogeGrammarParser::T__6);
            setState(74);
            expr(0);
            setState(79);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(82);
        match(dogeGrammarParser::T__13);
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
          ((1ULL << _la) & 7680) != 0))) {
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

bool dogeGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool dogeGrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void dogeGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  dogegrammarParserInitialize();
#else
  ::antlr4::internal::call_once(dogegrammarParserOnceFlag, dogegrammarParserInitialize);
#endif
}
