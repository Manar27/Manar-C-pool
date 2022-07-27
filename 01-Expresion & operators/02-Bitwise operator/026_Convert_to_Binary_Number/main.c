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
	/*Creating int variable to scan number from user, use the counter in loop and get the binary number*/
	int number				= 0;
	int counter 			= 0;
	int binary_number[32]	= {0};
	int bits				= sizeof(int) *8; //number of bits to use in the loop (size)

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d", &number);
	
	/*loop to get each bit of the number and store it in the corresponding array index*/
	for (counter = 0 ; counter < bits ; counter++)
	{
		binary_number[counter] = (number >> counter) & 1;
	}
	
	/*loop to print the array from 31 to 0 as the binary number*/
	printf("Converted binary : ");
	for (counter = bits-1 ; counter >= 0 ; counter--)
	{
		printf("%d",binary_number[counter]);
	}
}