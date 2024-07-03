//
// Created by endoc on 03.07.2024.
//

#include "parser.h"

#include <fstream>
#include <string>
#include <vector>

std::string parser::open_file(std::string &file_path) {
    std::ifstream in(file_path, std::ios::binary);
    if (!in.is_open()){
        return "error";
    }

    int f_size = in.seekg(0, std::ios::end).tellg();
    in.seekg(0);


}

std::vector<char> parser::create_token_list() {
    return {};
}

