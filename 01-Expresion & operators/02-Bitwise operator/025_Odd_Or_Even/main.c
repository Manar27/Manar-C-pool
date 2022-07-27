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
	
	/*Scanning the numbers from user and store them*/
	printf("Enter any number: ");
	scanf("%d", &number);
	
	/*Even or odd*/
	/*If the LSB is 1 then number is odd , if 0 then number is even*/
	if ((number << 0) & 1)
	{
		/*printing the result*/
		printf("%d is odd",number);
	}
	else
	{
		printf("%d is even",number);
	}
	
}