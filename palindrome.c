/*
 ============================================================================
 Name        : palindrome.c
 Author      : ASHLYN
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void palindrome(char str[])
{
	int l=0;
	int h = strlen(str) - 1;
	while(h>l)
	{
		if(str[l++] != str[h--])
		{
			printf("%s is not a palindrome \n ",str);
			return;
		}
	}
	printf("%s is a palindrome \n ",str);
}
int main(void) {
	printf("checking the given string is palindrome  or not \n "); /* prints  */
	palindrome("malayalam");
	palindrome("amma");
	palindrome("hello");
	return EXIT_SUCCESS;
}
