#include "question2.h"
#include "io.h"
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <sstream>

//Caroline's cheap carpets.
std::string output1 = "b b w";
std::string output2 = "w b b b b b";

InputData parse_input(const std::vector<std::string>& input) {
    InputData result;
    std::stringstream stream(input.front());
    int out[3];
    for(int i = 0; i < 3; i++) {
        stream >> out[i];
    }
    result.dimensions = out[0];
    result.order = out[1];
    int num_of_points = out[2];
    for (int i = 1; i <= num_of_points; i++){
        std::stringstream stream1(input[i]);
        int out2[2];
        for(int j = 0; j < 2; j++) {
            stream1 >> out2[j];
        }
        result.points.push_back(Point{.x = out2[0], .y = out2[1]});
    }
    return result;
}

char get_color(Point p) {

    return '?';
}

int main(int argc, char** argv) {
    InputData input1 = parse_input(read_file("resources/q2_input1.txt"));
    InputData input2 = parse_input(read_file("resources/q2_input2.txt"));
    if ( output1 != )
    return 0;
}