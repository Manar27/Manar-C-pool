/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program to find maximum
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variables to store numbers scanned from user*/
	int num1	= 0;
	int num2	= 0;

	/*Scanning the numbers from user and store them*/
	printf("Enter 1st number: ");
	scanf(" %d", &num1);
	printf("Enter 2nd number: ");
	scanf(" %d", &num2);
	
	/*Branching with switch to get the maximum number and print it*/
	switch(num1 > num2)
	{
		/*condition is false*/
		case 0:
			/*if the numbers are equal*/
			if (num1 == num2)
			{
				printf("Equal Numbers!");
			}
			else
			{
				printf("%d is the maximum",num2);
			}
			break;
		/*condition is true*/
		case 1:
			printf("%d is the maximum",num1);
			break;
	}
}