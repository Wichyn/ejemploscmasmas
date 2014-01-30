// cgi1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
int main(void) {
	printf("Content-Type: text/plain;charset=us-ascii\n\n");
	printf("<html><body><h1>Hello world\n\n</h1></body></html>");
	return 0;
}
