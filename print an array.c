/*
 ============================================================================
 Name        : print.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the array \n"); /* prints  */
	int a[5]={15,24,36,14,22};
	int i;
	for(i=0;i<5;i++)
		printf("%d \t",a[i]);
	return EXIT_SUCCESS;
}
