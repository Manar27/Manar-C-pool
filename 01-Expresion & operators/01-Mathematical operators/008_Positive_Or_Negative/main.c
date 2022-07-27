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
	signed int number = 0;
	
	/*Scanning the number from user and store it*/
	printf("Enter a number: ");
	scanf("%d", &number);
	
	/*Branching to check if the number > 0 then its positive*/
	if (number > 0)
	{
		printf("%d is positive.",number);
	}
	
	/*if the number < 0 then its negative*/
	else if (number < 0)
	{
		printf("%d is negative.",number);
	}
	
	/*0 neither positive nor negative*/
	else if (number == 0)
	{
		printf("It's a zero! neither positive nor negative.");
	}
}