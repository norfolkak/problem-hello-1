#ifndef CLASS3_H
#define CLASS3_H

#include <iostream>
#include <vector>

class Class3 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return number == static_cast<int>(vec.size()) * -1;
    }
    
    int c_3_1() { return -3; }

    float c_3_2() { return 3.14f; }

    void c_3_3() { std::cout << "Class3: c_3_3 method invoked" << '\n'; }
};

#endif
