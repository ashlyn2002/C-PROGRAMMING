/*
 ============================================================================
 Name        : calculater.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("THE CALCULATER \n"); /* prints  */
	int a=10,b=5;
	printf("the value of a is %d \n",a);
	printf("the value of b is %d \n",b);
	int sum,sub,mul,div;
	printf("1.add \n");
	printf("2.sub \n");
	printf("3.Multiple \n");
	printf("4.Dive \n");
	printf("enter the number in between 1-4 \n");
	int num=6;
	if(num==1)
	{
		sum=a+b;
		printf("sum = %d",sum);
	}
	else if(num==2)
	{
		sub=a-b;
		printf("sub = %d",sub);
	}
	else if(num==3)
	{
		mul=a*b;
		printf("multiple = %d",mul);
	}
	else if(num==4)
	{
		div=a/b;
		printf("dive = %d",div);
	}
	else
		printf("you are a fool");
	return EXIT_SUCCESS;
}
