/*
 ============================================================================
 Name        : even.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("find the sum of even numbers in an range \n"); /* prints  */
	int i,sum=0,num=50;
	printf("the range is in between 1- %d \n",num);
	for(i=1;i<=num;i++)
		if(i%2==0)
			sum=sum+i;
	printf("sum of even  numbers in between the the range is %d",sum);
	return EXIT_SUCCESS;
}
