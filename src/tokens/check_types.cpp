//
// Created by endoc on 02.07.2024.
//

#include "check_types.h"

bool check_types::is_string(const std::string &current_lexeme) {
    return current_lexeme.front() == '"' && current_lexeme.back() == '"';
}

bool check_types::is_char(const std::string &current_lexeme) {
    return current_lexeme.front() == '\'' && current_lexeme.back() == '\'';
}

bool check_types::is_integer(const std::string &current_lexeme) {
    for (const auto& symbol : current_lexeme)
        if (symbol < '0' || symbol > '9')
            return false;
    return true;
}

bool check_types::is_double(const std::string &current_lexeme) {
    bool point = false;

    for (const char& s : current_lexeme)
    {
        if (s == '.' && !point)
        {
            point = true;
            continue;
        }

        if (s == '.')
            return false;

        if (s < '0' || s > '9')
            return false;

    }

    return true;
}
