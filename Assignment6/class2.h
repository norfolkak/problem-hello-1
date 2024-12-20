#ifndef CLASS2_H
#define CLASS2_H

#include <iostream>
#include <vector>

class Class2 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return !vec.empty();
    }

    int c_2_1() { return 2; }

    float c_2_2() { return 2.718f; }

    void c_2_3() { std::cout << "Class2: c_2_3 method called" << '\n'; }
};

#endif
