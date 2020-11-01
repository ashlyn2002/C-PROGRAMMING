/*
 ============================================================================
 Name        : choice.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("choose the food item \n"); /* prints  */
	printf("1.Hamburger \n 2.Soup \n 3.Salad \n 4.Bread \n 5.Rice\n");
	printf("enter the in between 1-5 \n");
	int n=5;
	switch(n)
	{
	case 1:printf("the food item you choose is Hamburger\n");
		   break;
	case 2:printf("the food item you choose is Soup\n");
			   break;
	case 3:printf("the food item you choose is Salad \n");
			   break;
	case 4:printf("the food item you choose is Bread\n");
			   break;
	case 5:printf("the food item you choose is Rice\n");
			   break;
	default:printf("fool\n");
	}
	return EXIT_SUCCESS;
}
