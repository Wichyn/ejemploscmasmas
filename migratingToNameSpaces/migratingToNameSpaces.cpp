// migratingToNameSpaces.cpp : Defines the entry point for the console application.
//


//#include "stdafx.h"   Le quit� la opci�n de headers precompilados
#include <iostream>
int main()
{
	int sum = 0, value = 0;
	
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
