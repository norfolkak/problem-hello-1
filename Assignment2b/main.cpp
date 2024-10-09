//Klopov Aleksei - Assignment 2b - st130153@student.spbu.ru

#include <iostream>
#include <string>
#include <sstream>
#include "header.h"


int main()
{
    std::string rpn;
    std::cout << "Введите обратную польскую запись выражения: ";
    std::getline(std::cin, rpn);
    double result { solution(rpn) };
    std::cout << "Ответ: " << result << std::endl;

    return 0;
}
