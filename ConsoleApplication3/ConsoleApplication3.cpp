// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	std::cout << "Hello!";
	myFunc();
	int a = 25;
	std::cout << a;

	int n = 5;
	std::cout << n;
	while (n > 4) {
		n++;
		cout << n  << endl;
	}

	system("pause");
    return 0;
}

