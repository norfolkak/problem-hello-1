//Klopov Aleksei demo project 1

#include <iostream>
#include <string>
#include "header.h"

int main()
{
	std::string a = "world";
	privet(a);
	while (true)
	{
		std::cout<<std::endl;
		std::cin>>a;
		privet(a);
	}

	return 0;
}
