#include <iostream>
#include <cstdlib>
#include <sstream>
#include "lexer.h"

int main()
{
  std::string line;
  while (std::cout << "> " && std::getline(std::cin, line))
  {
    std::istringstream currentLine(line);
    while (!currentLine.eof()) 
    {
      int token = lexLine(currentLine);
      if (token == tok_eof)
        break;
      switch (token)
      {
      case tok_identifier:
        std::cout << "Identifier: " << identifierStr << "\n";
        identifierStr = "";
        break;
      case tok_number:
        std::cout << "Number: " << numVal << "\n";
        break;
      default:
        std::cout << "Character: " << (char)token << "\n";
        break;
      }
    }
  }
  return 0;
}
