/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program of electric power distribution charges
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the customer number and number of units scanned from user*/
	int customer_no	= 0;
	int units		= 0;
	float charge	= 0;
	
	/*Scanning the customer_no and units from user and store them*/
	printf("Enter the CUSTOMER NOs.: ");
	scanf(" %d",&customer_no);
	printf("Enter the UNITS consumed: ");
	scanf(" %d",&units);
		
	/*Branching to check if the units consumed to calculate the charge of the customer*/
	/*if no. of units between (0,200) -- > 0.50 per unit*/
	if (units >= 0 && units <= 200)
	{
		/*calculate the charge*/
		charge = 0.5*units;
		/*printing the charge and customer_no*/
		printf("CUSTOMER NO.: %d\nCharges = %0.2f", customer_no, charge);
	}
	
	/*if no. of units between (201,400) -- > 100 + 0.65 per unit excess of 200*/
	if (units >= 201 && units <= 400)
	{
		/*calculate the charge*/
		charge = 100 + 0.65*(units - 200) ;
		/*printing the charge and customer_no*/
		printf("CUSTOMER NO.: %d\nCharges = %0.2f", customer_no, charge);
	}
	
	/*if no. of units between (401,600) -- > 230 + 0.80 per unit excess of 400*/
	if (units >= 401 && units <= 600)
	{
		/*calculate the charge*/
		charge = 230 + 0.8*(units - 400) ;
		/*printing the charge and customer_no*/
		printf("CUSTOMER NO.: %d\nCharges = %0.2f", customer_no, charge);
	}
	
	/*if no. of units > 601 -- > 390 + 1.00 per unit excess of 600*/
	if (units >= 601)
	{
		/*calculate the charge*/
		charge = 390 + 1.00*(units - 600) ;
		/*printing the charge and customer_no*/
		printf("CUSTOMER NO.: %d\nCharges = %0.2f", customer_no, charge);
	}
}