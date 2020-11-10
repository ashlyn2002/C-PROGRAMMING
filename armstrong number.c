/*
 ============================================================================
 Name        : armstrong.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("find the given number is armstrong or not \n"); /* prints  */
	int a=153;
	int rem,prod=0,copy;
	copy=a;
	while(a!=0)
	{
		rem=a%10;
		prod=prod+rem*rem*rem;
		a=a/10;
	}
	printf("the prod is %d \n",prod);
	if(copy==prod)
		printf("the given number %d is armstrong \n",copy);
	else
		printf("the given number %d is not armstrong \n",copy);
	return EXIT_SUCCESS;
}
