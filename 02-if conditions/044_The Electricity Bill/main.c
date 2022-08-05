/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program of electricity bill
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the number of units scanned from user and calculate the bill*/
	int units		= 0;
	float bill		= 0;
	
	/*Scanning the units from user and store them*/
	printf("Enter total UNITS consumed: ");
	scanf(" %d",&units);
	
	/*-------------------------Question specifications----------------------------------*/
	/*For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit
	An additional surcharge of 20% is added to the bill. */
	
	/*Branching to check if the units consumed to calculate the bill*/
	/*if no. of units < 50 -- > 0.50 per unit*/
	if (units <= 50)
	{
		/*calculate the bill*/
		bill = 0.50 * units;
	}
	/*	For next 100 units (units <= 150)-- > 0.50 for first 50 units and 0.75 for next 100 units*/
	else if (units > 50 && units <= 150)
	{
		/*calculate the bill*/
		bill = 0.50 * 50 + 0.75 * (units - 50);
	}
	/*	For next 100 units (units <= 250)-- > 0.50 -> 50 units and 0.75 -> 100 and 1.20 for next 100*/
	else if (units > 150 && units <= 250)
	{
		/*calculate the bill*/
		bill = (0.50 * 50) + (0.75 * 100) + (1.20 * (units - 150));
	}
	/*	For units > 250 -- > 1.50/unit*/
	else if (units > 250)
	{
		/*calculate the bill*/
		bill = (0.50 * 50) + (0.75 * 100) + (1.20 * 150) + (1.50 * (units - 250));
	}
	
	/*adding 20% surcharge*/
	bill *= 1.2;
	/*printing the bill*/
	printf("Electricity bill = %0.2f", bill);
	
	/*-------------------------Test case specifications----------------------------------*/
	/*if (units <= 50)
	{
		bill = 0.50 * units;
	}
	else if (units > 50 && units <= 150)
	{
		bill = 0.75 * units;
	}
	else if (units > 150 && units <= 250)
	{
		bill = 1.20 * units;
	}
	else if (units > 250)
	{
		bill = 1.50 * units;
	}
	bill *= 1.2;
	printf("Electricity bill = %0.2f", bill);*/
	
}