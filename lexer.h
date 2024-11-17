#pragma once
#include <sstream>
#include <string>


// Token types
enum Token {
    tok_eof = -1,
    tok_func = -2,
    tok_identifier = -3,
    tok_number = -4,
    tok_eol = -5
};

extern std::string identifierStr;
extern double numVal;

int lexLine(std::istringstream &currentLine);
