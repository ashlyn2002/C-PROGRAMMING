/*
 ============================================================================
 Name        : largest.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the largest number among 3 \n "); /* prints  */
	int a=230,b=150,c=75;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	printf("the value of c is %d \n",c);
	if(a>b)
	{
		if(a>c)
		{
			printf("the biggest value is a \n");
		}
	}
	else
	{
		if(b>c)
			printf("the biggest value is b \n");
		else
			printf("the biggest value is c \n");
	}
	return EXIT_SUCCESS;
}
