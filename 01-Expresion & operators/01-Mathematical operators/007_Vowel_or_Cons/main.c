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
	/*Creating char variable to scan character from user*/
	char character = 0;
	
	/*Scanning the character from user and store it*/
	printf("Enter an alphabet: ");
	scanf("%c", &character);
	
	/*1st approach*/
	
	/*Branching using bitwise operations*/
	/*Checking for the ASCII code of the entered char if it belong under these conditions, it's a character*/
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		/*Nested if to check on the Vowel character*/
		if ( character == 'a'|| character == 'e' || character == 'i' || character == 'o' || character == 'u' )
		{
			printf("%c is a Vowel", character);
		}
		else
		{
			printf("%c is a Consonant", character);
		}
	}
	/*if the entered char is a number print it's a number not character --> Add to the program*/
	else if ( character >= '0' && character <= '9')
	{
		printf("%c is a number not a character! Thank you.", character);
	}
	
	/*2nd approach without checking on the number condition*/
	/*Branching using switch case*/
	/*switch (character)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a Vowel", character);
			break;
		default : 
			printf("%c is a Consonant", character);
			break;
	}*/
}