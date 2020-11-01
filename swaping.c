/*
 ============================================================================
 Name        : swaping.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("swap the value \n "); /* prints  */
	int a,b,temp;
	a=10;
	b=45;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	temp=a;
	a=b;
	b=temp;
	printf("the values after swap \n");
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	return EXIT_SUCCESS;
}
