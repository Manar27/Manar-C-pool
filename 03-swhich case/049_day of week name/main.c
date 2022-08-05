/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program print day name of week --> same as 047.
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store number of day in a week scanned from user*/
	int week_day	= 0;

	/*Scanning the number from user and store it*/
	printf("Enter day number in week (1-7): ");
	scanf(" %d", &week_day);
	
	/*Branching with switch to check day number and print the corresponding day name*/
	switch(week_day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("INVALID day number! Numbers from 1 to 7 only!");
			break;
	}
}