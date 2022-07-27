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

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d",&number);
	
	/*Branching to check the conditions*/
	/*1 & 1, then the condition is true, the bit is set*/
	if (number & (1<<0))
	{
		printf("LSB of %d is set (1)", number);
	}
	
	/*0 & 1 is false, then the bit is unset*/
	else
	{
		printf("LSB of %d is unset (0)", number);
	}
}