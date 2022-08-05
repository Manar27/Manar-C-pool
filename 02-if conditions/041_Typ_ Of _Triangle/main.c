/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to check the triangle type (equilateral, scalene or isosceles)
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the triangle sides scanned from user*/
	int a	= 0;
	int b	= 0;
	int c	= 0;
	
	/*Scanning the triangle sides from user and store them*/
	printf("Enter the three sides of the triangle: ");
	scanf(" %d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
		
	/*Branching to check if the triangle is equilateral, scalene or isosceles*/
	/*if all three sides are equal -- > equilateral*/
	if (a == b && a == c)
	{
		/*printing that triangle is equilateral*/
		printf("Equilateral triangle");
	}
	
	/*if only 2 sides are equal --> isosceles*/
	else if (a == b || a == c || b == c)
	{
		/*printing that triangle is isosceles*/
		printf("Isosceles triangle");
	}
	else
	{
		/*printing that triangle is scalene*/
		printf("Scalene triangle");
	}
}