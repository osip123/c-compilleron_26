//
// Created by endoc on 02.07.2024.
//

#ifndef C__COMPILLERON_26_TOKEN_H
#define C__COMPILLERON_26_TOKEN_H

#include "./token_types.cpp"

#include <string>
#include <iostream>


class token {
public:
    token_type type;
    std::string lexeme;

public:
    explicit token(const std::string& lexeme);
    static token_type which_token_type(const std::string& lexeme);
};


#endif //C__COMPILLERON_26_TOKEN_H
