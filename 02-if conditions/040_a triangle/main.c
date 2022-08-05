/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to check the triangle is valid or not
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the triangle angles scanned from user*/
	int a	= 0;
	int b	= 0;
	int c	= 0;
	
	/*Scanning the triangle angles from user and store them*/
	printf("Enter the three angles of the triangle: ");
	scanf(" %d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
		
	/*Branching to check if the triangle is valid or not*/
	/*check if a + b + c = 180 --> valid */
	if (a + b + c == 180)
	{
		/*printing that triangle is valid*/
		printf("Triangle is valid");
	}
	
	/*if != 180 --> not valid */
	else
	{
		/*printing that triangle is not valid*/
		printf("Triangle is not valid");
	}
}