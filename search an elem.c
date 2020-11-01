/*
 ============================================================================
 Name        : search.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("search an element in an array \n"); /* prints  */
	printf("elements in the array are \n");
	int a[5]={15,24,36,14,22};
	int i;
	for(i=0;i<5;i++)
		printf("%d \t",a[i]);
	int data=24,search=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==data)
		{
			search=1;
			break;
		}
	}
	if(search==0)
		printf("\n element is not fount in the array");
	else
		printf("\n element is fount in the array at index %d",i);

	return EXIT_SUCCESS;
}
