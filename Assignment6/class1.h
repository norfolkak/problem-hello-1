//Klopov Aleksei - Assignment 6 - st130153@student.spbu.ru

#ifndef CLASS1_H
#define CLASS1_H

#include <iostream>
#include <vector>

class Class1 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return number > 0;
    }

    int c_1_1() { return 1; }

    float c_1_2() { return 1.01f; }

    void c_1_3() { std::cout << "Class1: c_1_3 method called" << '\n'; }
};

#endif
