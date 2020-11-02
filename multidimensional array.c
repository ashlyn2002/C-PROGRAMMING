/*
 ============================================================================
 Name        : multidimensional.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("printing the multidimensional array \n"); /* prints  */
	int a[2][3]={{20,30,45},
				{4,74,98}};
	int r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" a[%d][%d]=%d \n",r,c,a[r][c]);
		}
	}
	return EXIT_SUCCESS;
}
