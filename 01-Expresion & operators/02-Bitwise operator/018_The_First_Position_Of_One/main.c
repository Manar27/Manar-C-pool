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
	/*Creating int variable to scan number from user, use the counter in loop and get the index*/
	int number	= 0;
	int counter = 0;
	int index	= -1;
	int bits	= sizeof(int) *8; //number of bits to use in the loop (size)

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d", &number);
	
	/*Branching to check the conditions*/
	for (counter = 0 ; counter < bits ; counter++)
	{
		if ((number >> counter) & 1)
		{
			index = counter;
			break;
		}
	}
	if (index >= 0)
	{
		printf ("The Lowest order set bit in %d is %d",number, index);
	}
	else
	{
		printf("0 has no 1 bits!");
	}
}