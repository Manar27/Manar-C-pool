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
	int first_num 		= 0;
	int second_num 		= 0;
	/*Creating int variable to swap*/
	int temp 	= 0;
	
	/*Scanning the 2 numbers from user and store them*/
	printf("Enter first number:  ");
	scanf("%d", &first_num);
	
	printf("Enter second number: ");
	scanf("%d", &second_num);
	
	/*Swapping*/
	temp 		= first_num;
	first_num 	= second_num;
	second_num 	= temp;
	
	/*Printing the numbers after swap*/
	printf("\n......After Swapping......\n");
	printf("The first number  = %d\n",first_num);
	printf("The second number = %d", second_num);
	
	/*if 2 numbers are the same printing a msg to user*/
	if(first_num == second_num)
	{
		printf("\nThey're equal!");
	}
}