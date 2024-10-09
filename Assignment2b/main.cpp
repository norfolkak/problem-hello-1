//Klopov Aleksei demo project 2b

#include <iostream>
#include <string>
#include <sstream>

double solution(std::string rpn)
{
    double* arr = new double[100];
    int top = -1;
    std::stringstream ss(rpn);
    std::string cell;
    
    while (ss >> cell)
    {   
    	if (cell == "+" || cell == "-" || cell == "*" || cell == "/")
    	{
            double b = arr[top--];
            double a = arr[top--];
            if (cell == "+") arr[++top] = a + b;
            else if (cell == "-") arr[++top] = a - b;
            else if (cell == "*") arr[++top] = a * b;
            else if (cell == "/") arr[++top] = a / b;
        }
        else 
        {
            arr[++top] = std::stoi(cell);
        }
    }
    
    double result = arr[top];
    delete [] arr;
    return result;
}

int main()
{
    std::string rpn;
    std::cout << "Введите обратную польскую запись выражения: ";
    std::getline(std::cin, rpn);
    
    int result = solution(rpn);
    std::cout << "Ответ: " << result << std::endl;

    return 0;
}
