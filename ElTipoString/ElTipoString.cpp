// ElTipoString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	

	
	const basic_string <char> s1("test");
	string s2("test");
	
	
	

	
	if (operator==(s1,s2))
		cout << "The strings s1 & s2 are equal." << endl;
	else
		cout << "The strings s1 & s2are not equal." << endl;
	return 0;
}


