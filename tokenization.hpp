#pragma once
#include <string>
#include <vector>

enum class TokenType
{
    exit,
    int_lit,
    semi
};

struct Token
{
    TokenType type;
    std::optional<std::string> value{};
};

std::string tokens_to_asm(const std::vector<Token>& tokens)
{
    std::stringstream output;
    output << "global _start\n_start:\n";   
    for (int i = 0; i < tokens.size(); i++)
    {
        const Token& token = tokens.at(i);
        if (token.type == TokenType::exit)
        {
            if (i + 1 < tokens.size() && tokens.at(i + 1).type == TokenType::int_lit)
            {
                if (i + 2 < tokens.size() && tokens.at(i + 2).type == TokenType::semi)
                {
                    output << "     mov rax, 60\n";
                    output << "     mov rdi, " << tokens.at(i + 1).value.value() << "\n";
                    output << "     syscall";
                }
            }
        }
    }
    return output.str();
}

class Tokenizer {
public: 
    inline explicit Tokenizer(const std::string& src)
        : m_src(std::move(src))
    {

    };

    inline std::vector<Token> tokenize() 
    {
        std::vector<Token> tokens;
        std::string buf;
        while (peak().has_value()) {

            if (std::isalnum(peak().value())) 
            {
                buf.push_back(consume());
            }

            if (buf == "exit")
            {
                tokens.push_back({ .type = TokenType::exit });
                buf.clear();
                continue;
            }  
            else {
                std::cerr << "You messed up!" << std::endl;
                exit(EXIT_FAILURE);
            }

            else if (std::isdigit(peak().value())) {
                buf.push_back(consume());

                while (peak().has_value() && std::isdigit(peak().value())) {
                    buf.push_back(consume());
                }
                tokens.push_back({ .type = TokenType::int_lit, .value = buf });
                buf.clear();
                continue;
            }
            else if (peak().value() == ';') {
                tokens.push_back({ .type = TokenType::semi });
                continue;
            }
            else if (std::isspace(peak().value())) {
                continue;
            } 
            else {
                std::cerr << "You messed up!" << std::endl;
                exit(EXIT_FAILURE);
            }
        }

        m_index = 0;
        return tokens;

    }

    private:
        [[nodiscard]] std::optional<char> peak(int ahead = 1) const 
        {
            if (m_index + ahead >= m_src.length()) 
            {
                return {};
            }
            else
            {
                return m_src.at(m_index);
            }
        }

        char consume() 
        {
            return m_src.at(m_index++); 
        }

        const std::string m_src;
        int m_index = 0;
};