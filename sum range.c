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
	printf("printing the sum in an range \n"); /* prints  */
	int i,sum=0,num=50;
	printf("last number is %d \n",num);
	for(i=1;i<=num;i++)
		sum=sum+i;
	printf("sum of numbers in between the the range is %d",sum);
	return EXIT_SUCCESS;
}
