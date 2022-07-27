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
	int num3			= 0;
	int max				= 0;
	
	/*Scanning the numbers from user and store them*/
	printf("Enter num 1: ");
	scanf(" %d", &num1);
	printf("Enter num 2: ");
	scanf(" %d", &num2);
	printf("Enter num 3: ");
	scanf(" %d", &num3);
	
	/*get max using nested ternary/conditional operator*/
	max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3)? num2: num3) ;
	
	/*printing the result*/
	printf ("Maximum between %d, %d and %d is %d",num1, num2, num3, max);
}