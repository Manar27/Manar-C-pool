/*
 * main.c
 *
 *
 * Author: Manar Hashem
 */ 
/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating char variable to scan a character from user*/
	char character	= 0;
	
	/*Scanning the year from user and store it*/
	printf("Enter any character: ");
	scanf(" %c", &character);

	/*print Alphabet or not using ternary/conditional operator*/
	((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) ? 
	printf("It's Alphabet") : printf("It's not Alphabet");
}