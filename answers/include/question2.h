#ifndef IRLCPC_QUESTION2_H
#define IRLCPC_QUESTION2_H
#include <vector>

struct Point {
    int x;
    int y;
};

struct InputData {
    int order = 0;
    int dimensions = 0;
    std::vector<Point> points;
};

#endif //IRLCPC_QUESTION2_H
