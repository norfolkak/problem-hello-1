#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main()
{
	string a = "world";
	privet(a);
	while (true)
	{
		cout<<endl;
		cin>>a;
		privet(a);
	}

	return 0;
}
