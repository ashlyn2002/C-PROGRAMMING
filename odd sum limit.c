/*
 ============================================================================
 Name        : odd.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the odd numbers sum in an limit \n"); /* prints  */
	int i,sum=0,num=6;
		printf("the range is in between 1- %d \n",num);
		for(i=1;i<=num;i++)
			if(i%2==1)
				sum=sum+i;
		printf("sum of odd  numbers in between the the range is %d",sum);
	return EXIT_SUCCESS;
}
