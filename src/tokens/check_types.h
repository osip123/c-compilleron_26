//
// Created by endoc on 02.07.2024.
//

#ifndef C__COMPILLERON_26_CHECK_TYPES_H
#define C__COMPILLERON_26_CHECK_TYPES_H

#include <string>
//#include


class check_types {
public:
//    std::string lexeme;
    static bool is_integer(const std::string& current_lexeme);
    static bool is_char(const std::string& current_lexeme);
    static bool is_string(const std::string& current_lexeme);
    static bool is_double(const std::string& current_lexeme);

};


#endif //C__COMPILLERON_26_CHECK_TYPES_H
