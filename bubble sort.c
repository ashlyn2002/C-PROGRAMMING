/*
 ============================================================================
 Name        : bubble.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubble(int a[],int n)
{
	int p,i,temp;
	for(p=0;p<n-1;p++)
	{
		for(i=0;i<n-1-p;i++)
		{
			if(a[i]>a[i+1])
			{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
			}
		}
	}
}
void printarray(int a[],int n)
{
	for(n=0;n<5;n++)
		printf("%d \t",a[n]);
}
int main(void) {
	printf("sort the elements in the array \n"); /* prints  */
	printf("elements in the array are \n");
	int a[5]={15,24,36,14,22};
	int n=5;
	printarray(a,n);
	printf("\n after the  bubble sort  \n");
	bubble(a,n);
	printarray(a,n);
	return EXIT_SUCCESS;
}
