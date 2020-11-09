/*
 ============================================================================
 Name        : reverse.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("reverse the  number \n"); /* prints  */
	int a=123;
	printf("the number is %d \n",a);
	int rev=0,rem;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf("the reverse number is %d \n",rev);
	return EXIT_SUCCESS;
}
