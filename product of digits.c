/*
 ============================================================================
 Name        : product.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("the product of digits of number \n"); /* prints  */
	int a=456,rem,prod=1;
	printf("the number is %d \n ",a);
	while(a!=0)
	{
		rem=a%10;
		prod=prod*rem;
		a=a/10;
	}
	printf("the product is %d",prod);
	return EXIT_SUCCESS;
}
