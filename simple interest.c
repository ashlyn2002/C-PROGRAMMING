/*
 ============================================================================
 Name        : simple.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("to find the simple interest"); /* prints  */
	int p; //Principal amount
	float si; //simple interest
	float r; //Interest rate
	float n; //Number of years
	p=25000;
	r=25.3;
	n=2.5;
	si=(p*r*n)/100;
	printf("the Principal amount  is %d \n",p);
	printf("the Interest rate is %f  \n",r);
	printf("the Number of years is %f \n",n);
	printf("the simple interest is %f \n",si);
	return EXIT_SUCCESS;
}
