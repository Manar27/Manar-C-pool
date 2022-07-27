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
	int math_coure	= 0;
	int phy_course 	= 0;
	int chem_course = 0;
	int total 		= 0;
	
	/*Scanning the 3 numbers from user and store them in the 3 int variables*/
	printf("Enter the degree of cousre 1: ");
	scanf(" %d",&math_coure);
	
	printf("Enter the degree of cousre 2: ");
	scanf(" %d",&phy_course);
	
	printf("Enter the degree of cousre 3: ");
	scanf(" %d",&chem_course);
	
	/*Calculating the total degree*/
	total = math_coure + phy_course + chem_course;
	
	/*Branching to check the conditions*/
	/*If the total >= 180, he's eligible and if the math_coure >= 65 and the total >= 140, he's eligible too*/
	if (total >= 180 || (math_coure >= 65 && total >= 140))
	{
		printf("The candidate is eligible for admission");
	}
	
	/*otherwise the candidate is not eligible*/
	else
	{
		printf("The candidate is not eligible for admission");
	}
}