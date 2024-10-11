

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <optional>
#include "tokenization.hpp"





int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Incorrect usage. Correct usage is..." << std::endl;
        std::cerr << "doge <input.dg>";
        return EXIT_FAILURE;
    }

    std::string contents;
    {
        std::stringstream contents_stream;
        std::fstream input(argv[1], std::ios::in);
        contents_stream << input.rdbuf();
        contents = contents_stream.str();
    }

    std::cout << "File content:" << std::endl;
    std::cout << contents << std::endl;

    std::vector<Token> tokens = tokenize(contents);
    std::cout << tokens_to_asm(tokens) << std::endl;
    
    {
        std::fstream file("./out.asm", std::ios::out);
        file << tokens_to_asm(tokens);
    }

    system("nasm -felf64 out.asm");
    system("ld -o out out.o");

    return EXIT_SUCCESS;
}

/*
myList.loop(elem, i => {


})

*/
