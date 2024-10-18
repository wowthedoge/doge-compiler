
// Generated from dogeLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  dogeLexer : public antlr4::Lexer {
public:
  enum {
    FOR = 1, IF = 2, ELSE = 3, RETURN = 4, WHERE = 5, PRINT = 6, ADD = 7, 
    MOD = 8, ASSIGN = 9, EQUAL = 10, LPAREN = 11, RPAREN = 12, LBRACE = 13, 
    RBRACE = 14, LBRACKET = 15, RBRACKET = 16, COMMA = 17, SEMICOLON = 18, 
    ID = 19, INT = 20, WS = 21, COMMENT = 22
  };

  explicit dogeLexer(antlr4::CharStream *input);

  ~dogeLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

