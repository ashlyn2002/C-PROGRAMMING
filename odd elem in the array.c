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
	printf("printing the number of odd element in the array \n"); /* prints  */
	int i,n=5;
	printf("elements in the array  1 are \n");
	int a[5]={15,27,36,11,22};
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n the odd elements in the array are : \n ");
	int c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d \t",a[i]);
			c=c+1;
		}
	}
	printf("\n the number of odd element in the array are : %d \n",c);
	return EXIT_SUCCESS;
}
