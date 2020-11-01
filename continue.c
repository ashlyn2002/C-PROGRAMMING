/*
 ============================================================================
 Name        : continue.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("program of continue statement \n"); /* prints  */
	int i;
		for(i=1;i<=10;i++)
		{
			printf("hope \n");
			if(i==5)
				continue;//if there is continue statement is go continue in the loop till the condition fail
			printf("hello \n");
		}
		printf("the program is over \n");
	return EXIT_SUCCESS;
}
