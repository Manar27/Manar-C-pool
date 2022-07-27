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
	/*Creating int variables to scan numbers from user and get the max between them*/
	int num1			= 0;
	int num2			= 0;
	int max				= 0;
	
	/*Scanning the numbers from user and store them*/
	printf("Enter num 1: ");
	scanf(" %d", &num1);
	printf("Enter num 2: ");
	scanf(" %d", &num2);
	
	/*get max using ternary/conditional operator*/
	max = num1 > num2 ? num1 : num2 ;
	
	/*printing the result*/
	printf ("Maximum between %d and %d is %d",num1, num2, max);
}