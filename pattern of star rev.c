/*
 ============================================================================
 Name        : pattern.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the pattern of star in the reveres  odder \n"); /* prints  */
		int r,c;
			for(r=1;r<=5;r++)
			{
				for(c=5;c>=r;c--)
				{
					printf("*");
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
