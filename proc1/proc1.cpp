// proc1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello world" << std::endl;
	int a, b, c;
	std::cout << "Please input two numbers" << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = " << a + b << std::endl;
	system("pause");
    return 0;
}

