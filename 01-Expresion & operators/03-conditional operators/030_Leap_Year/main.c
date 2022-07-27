/*
 * main.c
 *
 *
 * Author: Manar Hashem
 */ 
/*Leap year is a year has 366 days not only 365. It comes every 4 years to sum the 0.25 day of the past 4 years*/
/*can get it by simply divide the year / 4 and get the reminder. if reminder = 0 then it's a leap year */
/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to scan a year from user*/
	int year		= 0;
	
	/*Scanning the year from user and store it*/
	printf("Enter any year: ");
	scanf(" %d", &year);

	/*print leap or common using ternary/conditional operator*/
	(year % 4) ? printf("Common year.") : printf("Leap year.");
}