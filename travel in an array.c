/*
 ============================================================================
 Name        : travel.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("travel in an array \n"); /* prints  */
	int a[]={30,45,74,89};
	int n=sizeof(a)/sizeof(a[0]);
	printf("the elements in the array are \n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n travel in the array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
