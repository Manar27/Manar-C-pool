/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program to check the number is even or odd
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store number scanned from user*/
	int num	= 0;

	/*Scanning the number from user and store it*/
	printf("Enter any number to check even or odd: ");
	scanf(" %d", &num);
	
	/*Branching to is a positive number not equal to 0 --> even or odd number*/
	if(num > 0)
	{
		/*Branching with switch to get the maximum number and print it*/
		switch(num % 2)
		{
			/*reminder is zero --> num is even*/
			case 0:
				printf("%d is even",num);
				break;
			/*reminder is a value not 0 --> num is odd*/
			case 1:
				printf("%d is odd",num);
				break;
		}
	}
	/*if number < 0 --> negative number --> not allowed*/
	else if(num < 0)
	{
		printf("Negative number! only positive numbers are allowed!");
	}
	/*zero case*/
	else
	{
		printf("Zero is not even nor odd!");
	}
}