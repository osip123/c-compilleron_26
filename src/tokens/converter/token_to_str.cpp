//
// Created by endoc on 02.07.2024.
//

#include "token_to_str.h"

std::string token_to_str::token_to_string(token_type input) {
    switch (input) {
        case token_type::IDENTIFIER:
        {
            return "identifier";
        }
        case token_type::INTEGER_CONST:
        {
            return "integer constant";
        }
        case token_type::DOUBLE_CONST:
        {
            return "double constant";
        }
        case token_type::STRING_CONST:
        {
            return "string constant";
        }
        case token_type::CHAR_CONST:
        {
            return "char constant";
        }
        case token_type::TRUE:
        {
            return "true";
        }
        case token_type::FALSE:
        {
            return "false";
        }
        case token_type::CONST:
        {
            return "const";
        }
        case token_type::UNDEFINED:
        {
            return "undefined";
        }
        case token_type::INT:
        {
            return "int";
        }
        case token_type::DOUBLE:
        {
            return "double";
        }
        case token_type::BOOL:
        {
            return "bool";
        }
        case token_type::CHAR:
        {
            return "char";
        }
        case token_type::VOID:
        {
            return "void";
        }
        case token_type::AUTO:
        {
            return "auto";
        }
        case token_type::DO_WHILE:
        {
            return "do while";
        }
        case token_type::WHILE:
        {
            return "while";
        }
        case token_type::FOR:
        {
            return "for";
        }
        case token_type::BREAK:
        {
            return "break";
        }
        case token_type::CONTINUE:
        {
            return "continue";
        }
        case token_type::SWITCH:
        {
            return "switch";
        }
        case token_type::CASE:
        {
            return "case";
        }
        case token_type::DEFAULT:
        {
            return "default";
        }
        case token_type::IF:
        {
            return "if";
        }
        case token_type::ELSE:
        {
            return "else";
        }
        case token_type::LESS:
        {
            return "less";
        }
        case token_type::GREATER:
        {
            return "greater";
        }
        case token_type::LESS_EQUAL:
        {
            return "less and equal";
        }
        case token_type::GREATER_EQUAL:
        {
            return "greater and equal";
        }
        case token_type::EQUAL:
        {
            return "equal";
        }
        case token_type::NOT_EQUAL:
        {
            return "not equal";
        }
        case token_type::AND:
        {
            return "logic and";
        }
        case token_type::OR:
        {
            return "logic or";
        }
        case token_type::EXCLAMATION:
        {
            return "exclamation";
        }
        case token_type::PLUS:
        {
            return "plus";
        }
        case token_type::MINUS:
        {
            return "minus";
        }
        case token_type::STAR:
        {
            return "star";
        }
        case token_type::SLASH:
        {
            return "true";
        }
        case token_type::INC:
        {
            return "inc";
        }
        case token_type::DEC:
        {
            return "dec";
        }
        case token_type::LBRA:
        {
            return "lbra";
        }
        case token_type::RBRA:
        {
            return "rbra";
        }
        case token_type::LPAR:
        {
            return "lpar";
        }
        case token_type::RPAR:
        {
            return "rpar";
        }
        case token_type::LSQR:
        {
            return "lsqr";
        }
        case token_type::RSQR:
        {
            return "rsqr";
        }
        case token_type::ASSIGN:
        {
            return "assign";
        }
        case token_type::ADD_ASSIGN:
        {
            return "add assign";
        }
        case token_type::SUB_ASSIGN:
        {
            return "sun assign";
        }
        case token_type::MUL_ASSIGN:
        {
            return "mul assign";
        }
        case token_type::DIV_ASSIGN:
        {
            return "true";
        }
        case token_type::FUNCTION:
        {
            return "function";
        }
        case token_type::RETURN:
        {
            return "return";
        }
        case token_type::SEMICOLON:
        {
            return "semicolon";
        }
        case token_type::COLON:
        {
            return "colon";
        }
        case token_type::COMMA:
        {
            return "comma";
        }
        case token_type::POINT:
        {
            return "point";
        }
        case token_type::QUESTION:
        {
            return "question";
        }
        case token_type::AMPERSAND:
        {
            return "ampersand";
        }
        case token_type::LINE_COMMENT:
        {
            return "line comment";
        }
        case token_type::BLOCK_COMMENT_START:
        {
            return "block comment start";
        }
        case token_type::BLOCK_COMMENT_END:
        {
            return "block comment end";
        }
        case token_type::NEW:
        {
            return "new";
        }
        case token_type::DELETE:
        {
            return "delete";
        }
        case token_type::PREPROCESSOR_DIRECTIVE:
        {
            return "preprocessor directive";
        }
        case token_type::ACCESS_OPERATOR:
        {
            return "access operator";
        }

        default:
            return "";
    }
}

