/*
 ============================================================================
 Name        : break.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("program of break statement \n"); /* prints  */
	int i;
	for(i=1;i<=10;i++)
	{
		printf("hope \n");
		if(i==5)
			break;//if there is break statement is go out of the loop
		printf("hello \n");
	}
	printf("the program is over \n");
	return EXIT_SUCCESS;
}
