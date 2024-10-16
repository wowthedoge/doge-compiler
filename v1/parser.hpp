#pragma once
#include <vector>
#include "tokenization.hpp"
#include <optional>
#include <iostream>

struct NodeExpr
{
    Token int_lit;
};

struct NodeExit
{
    NodeExpr expr;
};

class Parser
{
public:
    inline explicit Parser(std::vector<Token> tokens)
        : m_tokens(std::move(tokens))
    {
    }

    std::optional<NodeExpr> parse_expr()
    {
        if (peek().has_value() && peek().value().type == TokenType::int_lit)
        {
            return NodeExpr{
                .int_lit = consume()};
        }
        else
        {
            return {};
        }
    }

    std::optional<NodeExit> parse()
    {
        std::optional<NodeExit> exit_node;
        while (peek().has_value())
        {
            if (peek().value().type == TokenType::exit)
            {
                consume(); // Consume the 'exit' token
                if (auto node_expr = parse_expr())
                {
                    exit_node = NodeExit{.expr = node_expr.value()};
                }
                else
                {
                    std::cerr << "Invalid expression" << std::endl;
                    exit(EXIT_FAILURE);
                }
                if (!peek().has_value() || peek().value().type != TokenType::semi)
                {
                    std::cerr << "Invalid expression" << std::endl;
                    exit(EXIT_FAILURE);
                }
                consume(); // Consume the semicolon
            }
            else
            {
                std::cerr << "Unexpected token" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        return exit_node;
    }

private:
    inline std::optional<Token> peek(int ahead = 0) const
    {
        if (m_index + ahead >= m_tokens.size())
        {
            return {};
        }
        else
        {
            return m_tokens.at(m_index + ahead);
        }
    }

    Token consume()
    {
        return m_tokens.at(m_index++);
    }

    const std::vector<Token> m_tokens;
    size_t m_index = 0;
};