/*
 ============================================================================
 Name        : large.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("find largest number among 2 numbers \n"); /* prints  */
	int a=25,b=34;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	if(a>b)
		printf("the value of a is large \n");
	else
		printf("the value of b is large \n ");
	return EXIT_SUCCESS;
}
