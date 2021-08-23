#include "io.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> read_file(const std::string& file_name) {
    std::vector<std::string> result;
    std::ifstream file(file_name);
    if(file.is_open()) {
        while(!file.eof()) {
            std::string line;
            std::getline(file,line);
            result.push_back(line);
            /*
            if (line == ""){ //Has reached EOF
                break;
            } else {

            }
            */
        }
    } else {
        std::cout << "Cannot open file : " << file_name << std::endl;
    }
    return result;
}