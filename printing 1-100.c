/*
 ============================================================================
 Name        : printing.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the numbers from 1-100 \n"); /* prints  */
	int i;
	for(i=1;i<=100;i++)
		printf("%d \t",i);
	return EXIT_SUCCESS;
}
