// ConsoleApplication1cgiprogramview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define DATAFILE "d:/borrame/data.txt"
#pragma warning(disable: 4996)

int main(void)
{
	FILE *f = fopen(DATAFILE, "r");
	int ch;
	if (f == NULL) {
		printf("%s%c%c\n",
			"Content-Type:text/html;charset=iso-8859-1", 13, 10);
		printf("<TITLE>Failure</TITLE>\n");
		printf("<P><EM>Unable to open data file, sorry!</EM>");
	}
	else {
		printf("%s%c%c\n",
			"Content-Type:text/plain;charset=iso-8859-1", 13, 10);
		while ((ch = getc(f)) != EOF)
			putchar(ch);
		fclose(f);
	}
	return 0;
}



