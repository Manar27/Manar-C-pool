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
	/*Creating int variables to scan number from user, scan the bit_no and calculate the number_after set bit*/
	int number_before	= 0;
	int number_after	= 0;
	int bit_no 			= 0;

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d", &number_before);
	/*Scanning bit number from user and store it*/
	printf("Enter nth bit to check (0-31): ");
	scanf(" %d", &bit_no);
		
	/*Branching to check the conditions*/
	if (bit_no >= 0 && bit_no <= 31)
	{
		/*setting the bit number bit_no of the number to be 1*/
		number_after = number_before | (1 << bit_no);
		/*printing the results*/
		printf ("Bit set successfully\n\n");
		printf ("Number before setting %d bit: %d <in decimal>\n", bit_no ,number_before);
		printf ("Number after setting %d bit:  %d <in decimal>", bit_no ,number_after);
	}
	else
	{
		printf("Sorry! Inefficient bit number. Try again later!");
	}
}