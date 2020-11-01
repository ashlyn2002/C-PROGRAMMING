/*
 ============================================================================
 Name        : day.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("finding the day \n"); /* prints  */
	printf("enter the number in between 1-7 \n");
	int d=8;
	switch(d)
	{
	case 1 :printf("Sunday");
			break;
	case 2 :printf("Monday");
				break;
	case 3 :printf("Tuesday");
				break;
	case 4 :printf("Wednesday");
				break;
	case 5 :printf("Thursday");
				break;
	case 6 :printf("Friday");
				break;
	case 7 :printf("Saturday");
				break;
	default :printf("fool");
	}
	return EXIT_SUCCESS;
}
