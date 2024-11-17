#include <string>
#include <cstdlib>
#include "lexer.h"

std::string identifierStr;
double numVal;

int lexLine(std::istringstream &currentLine)
{
  int thisChar = currentLine.get();

  // Skip whitespace
  while (isspace(thisChar))
  {
    thisChar = currentLine.get();
  }

  // Alphanumeric identifiers
  if (isalpha(thisChar))
  {
    identifierStr.clear();
    do
    {
      identifierStr += thisChar;
      thisChar = currentLine.get();
    } while (isalnum(thisChar));
    return tok_identifier;
  }

  // Numbers
  if (isdigit(thisChar))
  {
    std::string numStr;
    do
    {
      numStr += thisChar;
      thisChar = currentLine.get();
   
 } while (isdigit(thisChar) || thisChar == '.');
    numVal = strtod(numStr.c_str(), nullptr);
    return tok_number;
  }

  // Comments
  if (thisChar == '#')
  {
    return tok_eol;
  }

  // End of line
  if (thisChar == '\n' || thisChar == '\r')
    return tok_eol;

  // Otherwise, return ascii value of unknown character
  return thisChar;
}
