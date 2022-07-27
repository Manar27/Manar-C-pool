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
	/*Creating float variables to scan numbers from user and get the multiplication result*/
	float first_num 	= 0;
	float second_num 	= 0;
	float result		= 0;
	
	/*Scanning the 2 numbers from user and store them*/
	printf("Enter first number:  ");
	scanf("%f", &first_num);
	
	printf("Enter second number: ");
	scanf("%f", &second_num);
	
	/*calculating the result*/
	result = first_num * second_num;
	
	/*Printing the result*/
	printf("The result = %0.2f", result);
	
}