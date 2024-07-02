//
// Created by endoc on 02.07.2024.
//

#include "token.h"
#include "./token_types.cpp"

#include "cheker.cpp"

//#include "check_types.h"

#include <string>
#include <iostream>

token::token(const std::string &lexeme) {
    this->lexeme = lexeme;
    this->type = which_token_type(lexeme);
}

token_type token::which_token_type(const std::string &lexeme) {
    if (lexeme == "const")
        return token_type::CONST;

    // types
    if (lexeme == "int")
        return token_type::INT;
    if (lexeme == "double")
        return token_type::DOUBLE;
    if (lexeme == "bool")
        return token_type::BOOL;
    if (lexeme == "void")
        return token_type::VOID;
    if (lexeme == "char")
        return token_type::CHAR;
    if (lexeme == "auto")
        return token_type::AUTO;

    // cycles
    if (lexeme == "for")
        return token_type::FOR;
    if (lexeme == "while")
        return token_type::WHILE;
    if (lexeme == "do")
        return token_type::DO_WHILE;
    // cycles addition
    if (lexeme == "break")
        return token_type::BREAK;
    if (lexeme == "continue")
        return token_type::CONTINUE;



    // conditions
    if (lexeme == "if")
        return token_type::IF;
    if (lexeme == "else")
        return token_type::ELSE;



    // relationship operators
    if (lexeme == ">")
        return token_type::GREATER;
    if (lexeme == "<")
        return token_type::LESS;
    if (lexeme == "<=")
        return token_type::LESS_EQUAL;
    if (lexeme == ">=")
        return token_type::GREATER_EQUAL;



    // equal operators
    if (lexeme == "==")
        return token_type::EQUAL;
    if (lexeme == "!=")
        return token_type::NOT_EQUAL;



    // logical operators
    if (lexeme == "&&")
        return token_type::AND;
    if (lexeme == "||")
        return token_type::OR;
    if (lexeme == "!")
        return token_type::EXCLAMATION;


    // math operators
    if (lexeme == "+")
        return token_type::PLUS;
    if (lexeme == "-")
        return token_type::MINUS;
    if (lexeme == "*")
        return token_type::STAR;
    if (lexeme == "/")
        return token_type::SLASH;
    if (lexeme == "++")
        return token_type::INC;
    if (lexeme == "--")
        return token_type::DEC;


    // brackets
    if (lexeme == "{")
        return token_type::LBRA;
    if (lexeme == "}")
        return token_type::RBRA;
    if (lexeme == "(")
        return token_type::LPAR;
    if (lexeme == ")")
        return token_type::RPAR;
    if (lexeme == "[")
        return token_type::LSQR;
    if (lexeme == "]")
        return token_type::RSQR;


    // assign
    if (lexeme == "=")
        return token_type::ASSIGN;
    if (lexeme == "+=")
        return token_type::ADD_ASSIGN;
    if (lexeme == "-=")
        return token_type::SUB_ASSIGN;
    if (lexeme == "*=")
        return token_type::MUL_ASSIGN;
    if (lexeme == "/=")
        return token_type::DIV_ASSIGN;



    // function
    if (lexeme == "return")
        return token_type::RETURN;



    // new
    if (lexeme == "new")
        return token_type::NEW;
    if (lexeme == "delete")
        return token_type::DELETE;



    // boolean constants
    if (lexeme == "true")
        return token_type::TRUE;
    if (lexeme == "false")
        return token_type::FALSE;



    if (lexeme == "switch")
        return token_type::SWITCH;
    if (lexeme == "case")
        return token_type::CASE;
    if (lexeme == "default")
        return token_type::DEFAULT;



    // other symbols
    if (lexeme == ";")
        return token_type::SEMICOLON;
    if (lexeme == ":")
        return token_type::COLON;
    if (lexeme == ",")
        return token_type::COMMA;
    if (lexeme == ".")
        return token_type::POINT;
    if (lexeme == "?")
        return token_type::QUESTION;
    if (lexeme == "::")
        return token_type::ACCESS_OPERATOR;
    if (lexeme == "&")
        return token_type::AMPERSAND;


    // comment
    if (lexeme == "//")
        return token_type::LINE_COMMENT;
    if (lexeme == "/*")
        return token_type::BLOCK_COMMENT_START;
    if (lexeme == "*/")
        return token_type::BLOCK_COMMENT_END;


    if (lexeme[0] == '#')
        return token_type::PREPROCESSOR_DIRECTIVE;


    if (checker::is_integer(lexeme))
        return token_type::INTEGER_CONST;

    if (checker::is_double(lexeme))
        return token_type::DOUBLE_CONST;

    if (checker::is_string(lexeme))
        return token_type::STRING_CONST;

    if (checker::is_char(lexeme))
        return token_type::CHAR_CONST;


    return token_type::IDENTIFIER;
}



