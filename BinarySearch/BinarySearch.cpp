// busquedaBinaria.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int busquedaBinaria(int arr[], int limteInferior, int limiteSuperior, int valor);
void beCareful();

bool b = 42; // b is true
int i = b; // i has valor 1
int j = 3.14; // j has valor 3
double pi = i; // pi has valor 3.0
unsigned char c = -1; // assuming 8-bit chars, c has valor 255
signed char c2 = 256; // assuming 8-bit chars, the valor of c2 is undefined

int main(int argc, _TCHAR* argv[])
{

	int *arr = new int[100];
	//Por alguna vía se obtienen los valores para los elementos del arreglo
	cout << busquedaBinaria(arr, 0, 99, 4);
	delete[] arr;
	return 0;
}

int busquedaBinaria(int arr[], int limiteInferior, int limiteSuperior, int valor)
{
	int mid;
	while (limiteInferior <= limiteSuperior)
	{
		mid = (limiteInferior + limiteSuperior) / 2;
		if (arr[mid]<valor)
		{
			limiteInferior = mid + 1;
			continue;
		}
		else if (arr[mid] > valor)
		{
			limiteSuperior = mid - 1;
			continue;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
void beCareful()
{
	string cadena("abc");
	unsigned u = 10;
	int i = -42;
	cout << "Signed + Signed:   = "   << i + i << std::endl; // prints -84
	cout << "Unsigned + Signed: = "   << u + i << std::endl;   // if 32-bit ints, prints 4294967264
}



