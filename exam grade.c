/*
 ============================================================================
 Name        : exam.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("finding the grade of exam \n"); /* prints  */
	int m=20;
	if(m>=90)
		printf("your grade is  A+ \n");
	else if(m>=80)
		printf("your grade is  A \n");
	else if(m>=70)
			printf("your grade is  B+ \n");
	else if(m>=60)
			printf("your grade is  B \n");
	else if(m>=50)
			printf("your grade is  C+ \n");
	else if(m>=40)
			printf("your grade is  C \n");
	else if(m>=30)
			printf("your grade is  D+ \n");
	else
		printf("you have fail in the exam \n");
	return EXIT_SUCCESS;
}
