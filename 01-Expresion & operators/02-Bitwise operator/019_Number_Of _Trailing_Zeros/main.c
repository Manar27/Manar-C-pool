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
	/*Creating int variable to scan number from user, use the counter in loop and get the biggest num of trailing zeros*/
	int number			= 0;
	int counter 		= 0;
	int zeros_counter	= 0;
	int biggest_zeros	= 0;
	int bits			= sizeof(int) * 8; //number of bits to use in the loop (size)

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d", &number);
	
	/*Branching to check the conditions*/
	for (counter = 0 ; counter < bits ; counter++)
	{
		/*if the condition is false then if executed --> if false --> if the bit = 0*/
		if (!((number >> counter) & 1))
		{
			/*increase the counter of biggest_zeros*/
			zeros_counter++;
		}
		/*if bit = 1*/
		else
		{
			/*if the current count > biggest count --> it's the new biggest count*/
			if (zeros_counter > biggest_zeros)
			{
				biggest_zeros = zeros_counter;
				zeros_counter = 0;
			}
			else
			{
				zeros_counter = 0;
			}
		}
	}
	if (zeros_counter > biggest_zeros)
	{
		biggest_zeros = zeros_counter;
	}
	/*printing the result*/
	printf ("The Biggest number of zeros in %d is %d",number, biggest_zeros);
}