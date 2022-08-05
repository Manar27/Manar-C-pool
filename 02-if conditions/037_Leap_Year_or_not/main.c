/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to check if the year is leap year or not
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the year scanned from user*/
	int year	= 0;
	
	/*Scanning the year from user and store it*/
	printf("Enter a year: ");
	scanf(" %d",&year);
	
	/*Branching to check if the year is leap or not*/
	
	/*----------------------Using Bitwise & if -------------------------------*/
	/*If the year % 4 == 0 --> exactly divisable by 4 and year % 100 != 0 --> not divisable by 100, it's a leap year*/
	if (!(year % 4) && (year % 100))
	{
		/*printing that the year is leap*/
		printf("It's a leap year");
	}
	
	/*If the year % 400 == 0 --> exactly divisable by 400, it's also a leap year*/
	else if (! (year % 400))
	{
		/*printing that the year is leap*/
		printf("It's a leap year");
	}
	
	/*otherwise it's not a leap year*/
	else
	{
		/*printing that the year is not leap*/
		printf("Not a leap year");
	}
	
	/*----------------------Using if only-------------------------------*/
	/*If the year % 4 == 0 --> exactly divisable by 4 and year % 100 != 0 --> not divisable by 100, it's a leap year*/
	/*if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			/*printing that the year is leap*/
			/*printf("It's a leap year");
		}
	}
	
	/*If the year % 400 == 0 --> exactly divisable by 400, it's also a leap year*/
	/*else if (year % 400 == 0)
	{
		/*printing that the year is leap*/
		/*printf("It's a leap year");
	}
	
	/*otherwise it's not a leap year*/
	/*else
	{
		/*printing that the year is not leap*/
		/*printf("Not a leap year");
	}*/
}