/*
 ============================================================================
 Name        : elem.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the sum of the element in an array \n"); /* prints  */
	printf("elements in the array are \n");
	int a[5]={15,24,36,14,22};
	int i;
	for(i=0;i<5;i++)
		printf("%d \t",a[i]);
	printf("\n sum of the element in an array is :");
	int sum=0;
	for(i=0;i<5;i++)
		sum=sum+a[i];
	printf("%d",sum);
	return EXIT_SUCCESS;
}
