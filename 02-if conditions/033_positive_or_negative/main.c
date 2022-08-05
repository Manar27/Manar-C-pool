/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to check whether the number positive or negative.
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store a number scanned from user*/
	int number	= 0;

	/*Scanning the number from user and store it*/
	printf("Enter a number: ");
	scanf(" %d", &number);
	
	/*Branching to check if the number is positive or negative or zero*/
	if (number == 0)
	{
		/*printing that the number is zero*/
		printf("You entered a zero");
	}
	/*check for positive number > 0*/
	else if (number > 0)
	{
		/*printing that the number is positive*/
		printf("You entered a positive number");
	}
	/*check for negative number < 0*/
	else if (number < 0)
	{
		/*printing that the number is negative*/
		printf("You entered a negative number");
	}
}