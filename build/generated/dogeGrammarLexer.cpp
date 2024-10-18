
// Generated from dogeGrammar.g4 by ANTLR 4.13.2


#include "dogeGrammarLexer.h"


using namespace antlr4;

using namespace customlanguage;


using namespace antlr4;

namespace {

struct DogeGrammarLexerStaticData final {
  DogeGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DogeGrammarLexerStaticData(const DogeGrammarLexerStaticData&) = delete;
  DogeGrammarLexerStaticData(DogeGrammarLexerStaticData&&) = delete;
  DogeGrammarLexerStaticData& operator=(const DogeGrammarLexerStaticData&) = delete;
  DogeGrammarLexerStaticData& operator=(DogeGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dogegrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DogeGrammarLexerStaticData> dogegrammarlexerLexerStaticData = nullptr;

void dogegrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (dogegrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(dogegrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DogeGrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "ID", "INT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,17,86,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,14,4,14,71,8,14,11,14,12,14,72,1,15,4,
  	15,76,8,15,11,15,12,15,77,1,16,4,16,81,8,16,11,16,12,16,82,1,16,1,16,
  	0,0,17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,1,0,3,2,0,65,90,97,122,1,0,48,57,3,0,9,10,13,
  	13,32,32,88,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,
  	0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,
  	21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,
  	0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,3,37,1,0,0,0,5,39,1,0,0,0,7,41,1,0,0,
  	0,9,43,1,0,0,0,11,45,1,0,0,0,13,49,1,0,0,0,15,51,1,0,0,0,17,57,1,0,0,
  	0,19,59,1,0,0,0,21,61,1,0,0,0,23,63,1,0,0,0,25,65,1,0,0,0,27,67,1,0,0,
  	0,29,70,1,0,0,0,31,75,1,0,0,0,33,80,1,0,0,0,35,36,5,61,0,0,36,2,1,0,0,
  	0,37,38,5,40,0,0,38,4,1,0,0,0,39,40,5,41,0,0,40,6,1,0,0,0,41,42,5,123,
  	0,0,42,8,1,0,0,0,43,44,5,125,0,0,44,10,1,0,0,0,45,46,5,102,0,0,46,47,
  	5,111,0,0,47,48,5,114,0,0,48,12,1,0,0,0,49,50,5,44,0,0,50,14,1,0,0,0,
  	51,52,5,119,0,0,52,53,5,104,0,0,53,54,5,101,0,0,54,55,5,114,0,0,55,56,
  	5,101,0,0,56,16,1,0,0,0,57,58,5,43,0,0,58,18,1,0,0,0,59,60,5,45,0,0,60,
  	20,1,0,0,0,61,62,5,42,0,0,62,22,1,0,0,0,63,64,5,47,0,0,64,24,1,0,0,0,
  	65,66,5,91,0,0,66,26,1,0,0,0,67,68,5,93,0,0,68,28,1,0,0,0,69,71,7,0,0,
  	0,70,69,1,0,0,0,71,72,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,30,1,0,0,
  	0,74,76,7,1,0,0,75,74,1,0,0,0,76,77,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,
  	0,78,32,1,0,0,0,79,81,7,2,0,0,80,79,1,0,0,0,81,82,1,0,0,0,82,80,1,0,0,
  	0,82,83,1,0,0,0,83,84,1,0,0,0,84,85,6,16,0,0,85,34,1,0,0,0,4,0,72,77,
  	82,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dogegrammarlexerLexerStaticData = std::move(staticData);
}

}

dogeGrammarLexer::dogeGrammarLexer(CharStream *input) : Lexer(input) {
  dogeGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *dogegrammarlexerLexerStaticData->atn, dogegrammarlexerLexerStaticData->decisionToDFA, dogegrammarlexerLexerStaticData->sharedContextCache);
}

dogeGrammarLexer::~dogeGrammarLexer() {
  delete _interpreter;
}

std::string dogeGrammarLexer::getGrammarFileName() const {
  return "dogeGrammar.g4";
}

const std::vector<std::string>& dogeGrammarLexer::getRuleNames() const {
  return dogegrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& dogeGrammarLexer::getChannelNames() const {
  return dogegrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& dogeGrammarLexer::getModeNames() const {
  return dogegrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& dogeGrammarLexer::getVocabulary() const {
  return dogegrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dogeGrammarLexer::getSerializedATN() const {
  return dogegrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& dogeGrammarLexer::getATN() const {
  return *dogegrammarlexerLexerStaticData->atn;
}




void dogeGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  dogegrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(dogegrammarlexerLexerOnceFlag, dogegrammarlexerLexerInitialize);
#endif
}
