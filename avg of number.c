/*
 ============================================================================
 Name        : avg.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("the Ave of 3 numbers \n"); /* prints  */
	int a,b,c,avg;
	a=12;
	b=45;
	c=78;
	avg=(a+b+c)/3;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	printf("the value of c is %d \n",c);
	printf("the avg of a,b and c  %d \n",avg);
	return EXIT_SUCCESS;
}
