/*
 ============================================================================
 Name        : sum.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("the sum of digits \n"); /* prints  */
	int a=456;
	printf("the number is %d \n ",a);
	int sum=0;
	while(a!=0)
	{
		sum=sum+a%10;
		a=a/10;
	}
	printf("the sum of digits is %d",sum);
	return EXIT_SUCCESS;
}
