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
}

class Parser
{
public:
    inline explicit Parser(std::vector<Token> tokens)
        : m_tokens(std::move(tokens))
    {
    }

    std::optional<NodeExpr> parse_expr()
    {
        if (peak().has_value() && peak().value().type == TokenType::int_lit)
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
        while (peak().has_value())
        {
            if (peak().value().type == TokenType::exit)
            {
                if (auto node_expr = parse_expr())
                {
                    exit_node = NodeExit{.expr = node_expr.value()};
                }
                else
                {
                    std::cerr << "Invalid expression" << std::endl;
                    exit(EXIT_FAILURE);
                }
                if (!peak().has_value() || peak().value().type != TokenType::semi)
                {
                    std::cerr << "Invalid expression" << std::endl;
                    exit(EXIT_FAILURE);
                }
            }
        }
        m_index = 0;
        return exit_node;
    }

private:
    inline std::optional<Token> peak(int ahead = 1) const
    {
        if (m_index + ahead > m_src.length())
        {
            return {};
        }
        else
        {
            return m_src.at(m_index);
        }
    }

    Token consume()
    {
        return m_src.at(m_index++);
    }

    const std::string m_src;
    int m_index = 0;
}