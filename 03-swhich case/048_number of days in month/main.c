/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program print number of days in month.
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store month number scanned from user*/
	int month_num	= 0;

	/*Scanning the month number from user and store it*/
	printf("Enter day number in week (1-7): ");
	scanf(" %d", &month_num);
	
	/*Branching to check if month number is from 1 to 12*/
	if (month_num > 12 || month_num < 1)
	{
		printf("INVALID month number! Numbers from 1 to 12 only!");
	}
	else
	{
		/*Branching with switch to check month number and print the corresponding number of days*/
		switch(month_num)
		{
			/*January, March, May, July, August, October, December --> 31 days*/
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31 days");
				break;
			/*February --> 28/29 days*/
			case 2:
				printf("28/29 days");
				break;
			/*April, June, September, November --> 30 days*/
			default:
				printf("30 days");
		}
	}
}