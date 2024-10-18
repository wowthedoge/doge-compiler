

#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "./generated/DogeGrammarLexer.h"
// #include "./generated/MyLanguageParser.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Incorrect usage. Correct usage is..." << std::endl;
        std::cerr << "doge <input.dg>";
        return EXIT_FAILURE;
    }

    // std::string contents;
    // {
    //     std::stringstream contents_stream;
    //     std::fstream input(argv[1], std::ios::in);
    //     contents_stream << input.rdbuf();
    //     contents = contents_stream.str();
    // }

    std::ifstream stream;
    stream.open(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Cannot open file: " << argv[1] << std::endl;
        return 1;
    }

    std::stringstream string_stream;
    string_stream << stream.rdbuf();
    std::string contents = string_stream.str();
    std::cout << contents << std::endl;

    antlr4::ANTLRInputStream input(stream);
    std::cout << "Input: " << input.toString() << std::endl;
    

    return EXIT_SUCCESS;
}

/*
myList.loop(elem, i => {


})

*/
