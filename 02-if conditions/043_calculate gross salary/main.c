/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to calculate Gross Salary of employee
 *
 *Gross Salary = Basic Salary + Dearness allowance (DA) + House Rent Allowance (HRA).
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store basic salary scanned from user and get the DA, HRA and gross salary*/
	int basic_salary	= 0;
	float DA			= 0;
	float HRA			= 0;
	float gross_salary 	= 0;
	
	/*Scanning the basic salary from user and store it*/
	printf("Enter the basic salary of an employee: ");
	scanf(" %d",&basic_salary);
	
	/*Branching to check on the basic salary*/
	/*If the basic salary <= 10000, HRA = 20%, DA = 80%*/
	if (basic_salary <= 10000)
	{
		/*calculate HRA, DA and gross_salary at this condition*/
		HRA = 0.2 * basic_salary;
		DA 	= 0.8 * basic_salary;
		gross_salary = basic_salary + HRA + DA;
		/*print the gross salary*/
		printf("GROSS Salary of employee: %0.2f",gross_salary);
	}
	/*if the basic salary between 10001 to 20000, HRA = 25%, DA = 90%*/
	else if (basic_salary >= 10001 && basic_salary <= 20000)
	{
		/*calculate HRA, DA and gross_salary at this condition*/
		HRA = 0.25 * basic_salary;
		DA 	= 0.9  * basic_salary;
		gross_salary = basic_salary + HRA + DA;
		/*print the gross salary*/
		printf("GROSS Salary of employee: %0.2f",gross_salary);
	}
	/*if the basic salary >= 20001 : HRA = 30%, DA = 95%*/
	else if (basic_salary >= 20001)
	{
		/*calculate HRA, DA and gross_salary at this condition*/
		HRA = 0.30 * basic_salary;
		DA 	= 0.95 * basic_salary;
		gross_salary = basic_salary + HRA + DA;
		/*print the gross salary*/
		printf("GROSS Salary of employee: %0.2f",gross_salary);
	}
}