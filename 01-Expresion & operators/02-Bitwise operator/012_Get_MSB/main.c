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
	
	/*to get the number of bits int he integer*/
	int bits = sizeof(int) * 8; //32

	/*Scanning the number from user and store it*/
	printf("Enter any number: ");
	scanf(" %d",&number);
	
	/*Branching to check the conditions*/
	/*1 & 1, then the condition is true, the bit is set*/
	
	/*1st approach to assume we only use 8 bits (or any end case)*/
	/*if (number & (1 << 8)) //assuming the number is only 8 bits*/
	
	/*2nd approach to get the total number of bits in int --> professional*/
	if (number & (1 << (bits-1))) 
	{
		printf("MSB of %d is set (1)", number);
	}
	
	/*0 & 1 is false, then the bit is unset*/
	else
	{
		printf("MSB of %d is unset (0)", number);
	}
}