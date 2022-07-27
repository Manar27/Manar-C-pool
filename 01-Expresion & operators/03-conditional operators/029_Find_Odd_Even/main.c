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
	/*Creating int variable to scan number from user*/
	int number		= 0;
	
	/*Scanning the number from user and store it*/
	printf("Enter number to check even or odd: ");
	scanf(" %d", &number);

	/*print even or odd using ternary/conditional operator*/
	(number % 2) ? printf("The number is odd.") : printf("The number is even.");
}