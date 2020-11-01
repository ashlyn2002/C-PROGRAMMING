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
	printf("printing the even numbers in an range\n "); /* prints  */
	int i,num=10;
	printf("the range is in between 1- %d \n",num);
	for(i=1;i<=num;i++)
		if(i%2==0)
			printf("%d \t",i);
	return EXIT_SUCCESS;
}
