// decimalbinario.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include <iostream>
#pragma warning(disable: 4996)



int main(){

int  decimalNumber, remainder; 
	 unsigned int  quotient;

	int binaryNumber[100], i = 1, j;
	printf("Enter any decimal number: ");
	scanf("%ld", &decimalNumber);

	quotient = decimalNumber;
	printf("Numero decimal%d\n", quotient);
	int caracter = true;
	printf("caracter = %B\n", caracter);
	while (quotient != 0){
		binaryNumber[i++] = quotient % 2;
		quotient = quotient / 2;
	}
	printf("Equivalent binary value of decimal number %d:\n ", decimalNumber);
	for (j = i - 1; j > 0; j--)
		printf("%d", binaryNumber[j]);
	printf("\n");
	printf("Tamaño de un double%d\n", sizeof(double));
	
	

	for (int i = 10; i >= 0; --i)
		std::cout << i << std::endl;
	for (int  i = 10; i >= 0; --i)
		std::cout << i << std::endl;
	return 0;

}

