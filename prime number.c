/*
 ============================================================================
 Name        : prime.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("prime number \n"); /* prints  */
	int i,flag=0,num=11;
	printf("the checking number is %d\n",num);
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("its a prime number\n");
	else
		printf("its not a prime number \n");
	return EXIT_SUCCESS;
}
