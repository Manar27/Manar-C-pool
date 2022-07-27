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
	/*Creating int variables to scan numbers from user*/
	int num1 		= 0;
	int num2 		= 0;
	/*Creating int variable to store the Reminder*/
	int Reminder 	= 0;
	/*Creating float variable to store the Division*/
	float Division 	= 0;
	
	/*Scanning the 2 numbers from user and store them*/
	printf("Enter number 1: ");
	scanf(" %d",&num1);
	
	printf("Enter number 2: ");
	scanf(" %d",&num2);
	
	/*Branching to check if num2 isn't zero*/
	if (num2 != 0)
	{
		/*calculate the Reminder*/
		Reminder = num1 % num2;
		/*calculate the Division -- we use casting to float*/
		Division = (float)(num1 / num2);
		/*Print the Reminder*/
		printf("Reminder = %d", Reminder);
		/*Print the Division as integer as asked in the question*/
		printf("\nDivision is %d", Ratio);
	}
	else
	{
		/*print a msg to the user if the condition is false*/
		printf("You can't divide by zero!");
	}
}