/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to check whether the character Vowel or consonant
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating char variable to store a character scanned from user*/
	char character	= 0;

	/*Scanning the character from user and store it*/
	printf("Enter an alphabet: ");
	scanf(" %c", &character);
	
	/*Branching to check if the character is vowel (a or e or i or o or u) or consonant*/
	
	/*check IF the character is an alphabet at first*/
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		/*check for small letters a, e, i, o and u*/
		if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
		{
			/*printing that the character is Vowel*/
			printf("%c is Vowel", character);
		}
		/*check for capital letters A, E, I, O, U*/
		else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
		{
			/*printing that the character is Vowel*/
			printf("%c is Vowel", character);
		}
		/*any character other than the previous is consonant*/
		else
		{
			/*printing that the character is consonant*/
			printf("%c is Consonant", character);
		}
	}
	else
	{
		/*printing that the character is not an alphabet*/
			printf("%c is not an alphabet!", character);
	}
}