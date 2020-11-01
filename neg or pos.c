/*
 ============================================================================
 Name        : neg.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("to find  the number is negative or positive \n"); /* prints  */
	int n;
	n=24;
	printf("the value of n is %d \n",n);
	if(n<0)
		printf("the number is -ve \n");
	else
		printf("the number is +ve \n");
	return EXIT_SUCCESS;
}
