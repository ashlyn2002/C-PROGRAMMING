/*
 ============================================================================
 Name        : add.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("add the multidimensional array  \n"); /* prints  */
	int r,c;
	printf("printing the 1st multidimensional array \n"); /* prints  */
	int a[2][3]={{20,30,45},
				{4,74,98}};
	printf("the elements in the 1st array are : \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" a[%d][%d]=%d \n",r,c,a[r][c]);
		}
	}
	printf("the 1st multidimensional array \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	printf("printing the 2nd  multidimensional array \n"); /* prints  */
	int b[2][3]={{14,3,17},
				{54,2,8}};
	printf("the elements in the 2nd array are : \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" b[%d][%d]=%d \n",r,c,b[r][c]);
		}
	}
	printf("the 2nd  multidimensional array \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",b[r][c]);
		}
		printf("\n");
	}
	printf("add the 2 multidimensional array \n");
	int add[2][3];
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			add[r][c]=a[r][c]+b[r][c];
		}
	}
	//for printing the sum
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",add[r][c]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
