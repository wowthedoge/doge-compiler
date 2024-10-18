
// Generated from dogeLexer.g4 by ANTLR 4.13.2


#include "dogeLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct DogeLexerStaticData final {
  DogeLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DogeLexerStaticData(const DogeLexerStaticData&) = delete;
  DogeLexerStaticData(DogeLexerStaticData&&) = delete;
  DogeLexerStaticData& operator=(const DogeLexerStaticData&) = delete;
  DogeLexerStaticData& operator=(DogeLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag dogelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<DogeLexerStaticData> dogelexerLexerStaticData = nullptr;

void dogelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (dogelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(dogelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DogeLexerStaticData>(
    std::vector<std::string>{
      "FOR", "IF", "ELSE", "RETURN", "WHERE", "PRINT", "ADD", "MOD", "ASSIGN", 
      "EQUAL", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", 
      "COMMA", "SEMICOLON", "ID", "INT", "WS", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'for'", "'if'", "'else'", "'return'", "'where'", "'print'", "'+'", 
      "'%'", "'='", "'=='", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", 
      "';'"
    },
    std::vector<std::string>{
      "", "FOR", "IF", "ELSE", "RETURN", "WHERE", "PRINT", "ADD", "MOD", 
      "ASSIGN", "EQUAL", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", 
      "RBRACKET", "COMMA", "SEMICOLON", "ID", "INT", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,22,131,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,
  	7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,5,18,104,8,18,10,18,12,18,
  	107,9,18,1,19,4,19,110,8,19,11,19,12,19,111,1,20,4,20,115,8,20,11,20,
  	12,20,116,1,20,1,20,1,21,1,21,1,21,1,21,5,21,125,8,21,10,21,12,21,128,
  	9,21,1,21,1,21,0,0,22,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,
  	1,0,5,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,
  	0,9,10,13,13,32,32,2,0,10,10,13,13,134,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,
  	1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,
  	0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,3,49,1,0,0,0,
  	5,52,1,0,0,0,7,57,1,0,0,0,9,64,1,0,0,0,11,70,1,0,0,0,13,76,1,0,0,0,15,
  	78,1,0,0,0,17,80,1,0,0,0,19,82,1,0,0,0,21,85,1,0,0,0,23,87,1,0,0,0,25,
  	89,1,0,0,0,27,91,1,0,0,0,29,93,1,0,0,0,31,95,1,0,0,0,33,97,1,0,0,0,35,
  	99,1,0,0,0,37,101,1,0,0,0,39,109,1,0,0,0,41,114,1,0,0,0,43,120,1,0,0,
  	0,45,46,5,102,0,0,46,47,5,111,0,0,47,48,5,114,0,0,48,2,1,0,0,0,49,50,
  	5,105,0,0,50,51,5,102,0,0,51,4,1,0,0,0,52,53,5,101,0,0,53,54,5,108,0,
  	0,54,55,5,115,0,0,55,56,5,101,0,0,56,6,1,0,0,0,57,58,5,114,0,0,58,59,
  	5,101,0,0,59,60,5,116,0,0,60,61,5,117,0,0,61,62,5,114,0,0,62,63,5,110,
  	0,0,63,8,1,0,0,0,64,65,5,119,0,0,65,66,5,104,0,0,66,67,5,101,0,0,67,68,
  	5,114,0,0,68,69,5,101,0,0,69,10,1,0,0,0,70,71,5,112,0,0,71,72,5,114,0,
  	0,72,73,5,105,0,0,73,74,5,110,0,0,74,75,5,116,0,0,75,12,1,0,0,0,76,77,
  	5,43,0,0,77,14,1,0,0,0,78,79,5,37,0,0,79,16,1,0,0,0,80,81,5,61,0,0,81,
  	18,1,0,0,0,82,83,5,61,0,0,83,84,5,61,0,0,84,20,1,0,0,0,85,86,5,40,0,0,
  	86,22,1,0,0,0,87,88,5,41,0,0,88,24,1,0,0,0,89,90,5,123,0,0,90,26,1,0,
  	0,0,91,92,5,125,0,0,92,28,1,0,0,0,93,94,5,91,0,0,94,30,1,0,0,0,95,96,
  	5,93,0,0,96,32,1,0,0,0,97,98,5,44,0,0,98,34,1,0,0,0,99,100,5,59,0,0,100,
  	36,1,0,0,0,101,105,7,0,0,0,102,104,7,1,0,0,103,102,1,0,0,0,104,107,1,
  	0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,38,1,0,0,0,107,105,1,0,0,0,
  	108,110,7,2,0,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,
  	1,0,0,0,112,40,1,0,0,0,113,115,7,3,0,0,114,113,1,0,0,0,115,116,1,0,0,
  	0,116,114,1,0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,119,6,20,0,0,119,
  	42,1,0,0,0,120,121,5,47,0,0,121,122,5,47,0,0,122,126,1,0,0,0,123,125,
  	8,4,0,0,124,123,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,
  	0,127,129,1,0,0,0,128,126,1,0,0,0,129,130,6,21,0,0,130,44,1,0,0,0,5,0,
  	105,111,116,126,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dogelexerLexerStaticData = std::move(staticData);
}

}

dogeLexer::dogeLexer(CharStream *input) : Lexer(input) {
  dogeLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *dogelexerLexerStaticData->atn, dogelexerLexerStaticData->decisionToDFA, dogelexerLexerStaticData->sharedContextCache);
}

dogeLexer::~dogeLexer() {
  delete _interpreter;
}

std::string dogeLexer::getGrammarFileName() const {
  return "dogeLexer.g4";
}

const std::vector<std::string>& dogeLexer::getRuleNames() const {
  return dogelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& dogeLexer::getChannelNames() const {
  return dogelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& dogeLexer::getModeNames() const {
  return dogelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& dogeLexer::getVocabulary() const {
  return dogelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dogeLexer::getSerializedATN() const {
  return dogelexerLexerStaticData->serializedATN;
}

const atn::ATN& dogeLexer::getATN() const {
  return *dogelexerLexerStaticData->atn;
}




void dogeLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  dogelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(dogelexerLexerOnceFlag, dogelexerLexerInitialize);
#endif
}
