// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Header.h"
#include "Struct.h"

int main()
{
	string name;
	cout << "Enter worker: \n\n";
	cin >> name;

	std::cout << "Hello!" << endl;
	myFunc();
	int a = 25;
	std::cout << a;


	int n = 5;
	std::cout << n;

	int b = 50;
	std::cout << b;
	system("pause");
    return 0;
}

