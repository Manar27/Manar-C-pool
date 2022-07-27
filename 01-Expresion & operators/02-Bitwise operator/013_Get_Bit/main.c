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
	int number	= 0;
	int bit_no 	= 0;
	int bit_value = 0;

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d", &number);
	
	printf("Enter nth bit to check (0-31): ");
	scanf(" %d", &bit_no);
		
	/*Branching to check the conditions*/
	if (bit_no >= 0 && bit_no <= 31)
	{
		/*Calculating the bit value and store it*/
		bit_value = (number >> bit_no) & 1;
		printf ("The %d bit is set to %d", bit_no ,bit_value);
	}
	else
	{
		printf("Sorry! Inefficient bit number. Try again later!");
	}
}