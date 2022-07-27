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
	int num1			= 0;
	int num2			= 0;
	
	/*Scanning the numbers from user and store them*/
	printf("Enter num 1: ");
	scanf(" %d", &num1);
	printf("Enter num 2: ");
	scanf(" %d", &num2);
	
	/*Swapping method using bitwise xor*/
	/*Tracing : assume num1 = 1010 --> 10 / num2 = 0100 --> 4*/
	num1 ^= num2; //1010 ^ 0100 = 1110 --> num1
	num2 ^= num1; //0100 ^ 1110 = 1010 --> num2 = 10
	num1 ^= num2; //1010 ^ 1110 = 0100 --> num1 = 4
	
	/*printing the result*/
	printf ("num1 after swapping = %d\n",num1);
	printf ("num2 after swapping = %d",num2);
}