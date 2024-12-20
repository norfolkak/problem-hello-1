//Klopov Aleksei - Assignment 6 - st130153@student.spbu.ru

#ifndef CLASS_TEMPLATE_H
#define CLASS_TEMPLATE_H

#include <vector>
#include <iostream>

template <typename T>
class GeneralTemplate {
private:
    T object;
    int number;
    std::vector<float> vector;

public:
    GeneralTemplate(const T& obj, int num, const std::vector<float>& vec)
        : object(obj), number(num), vector(vec) {}
    bool foo() {
        return object.bar(number, vector);
    }
};

template <>
class GeneralTemplate<int> {
private:
    int object;
    int number;
    std::vector<float> vector;

public:
    GeneralTemplate(int obj, int num, const std::vector<float>& vec)
        : object(obj), number(num), vector(vec) {}

    bool foo() {
        return true;
    }
};

template <>
class GeneralTemplate<double> {
private:
    double object;
    int number;
    std::vector<float> vector;

public:
    GeneralTemplate(double obj, int num, const std::vector<float>& vec)
        : object(obj), number(num), vector(vec) {}

    bool foo() {
        return false;
    }
};

#endif
