/*
 ============================================================================
 Name        : palindrome.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("find the given number is palindrome or not \n "); /* prints  */
	int a=567;
	printf("the number is %d \n",a);
	int rev=0,rem,copy;
	copy=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(copy==rev)
		printf("the given number %d is palindrome \n",copy);
	else
		printf("the given number %d is not palindrome\n",copy );
	return EXIT_SUCCESS;
}
