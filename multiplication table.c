/*
 ============================================================================
 Name        : multiplication.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the  multiplication table \n"); /* prints  */
	int i,n=3,r;
	for(i=1;i<=10;i++)
	{
		r=i*n;
		printf("%d*%d=%d",i,n,r);
		printf("\n");
	}
	return EXIT_SUCCESS;
}
