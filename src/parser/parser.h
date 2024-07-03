//
// Created by endoc on 03.07.2024.
//

#ifndef C__COMPILLERON_26_PARSER_H
#define C__COMPILLERON_26_PARSER_H

#include <fstream>
#include <string>
#include <vector>

class parser {
private:
    std::vector<char32_t> tokens_list;
private:
    static std::string open_file(std::string& file_path);
public:
    std::string file_path;
public:
    static std::vector<char> create_token_list();
public:
    std::string code;
};


#endif //C__COMPILLERON_26_PARSER_H
