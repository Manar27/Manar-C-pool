/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program of simple calculator
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the operator scanned from user*/
	char operator 	= 0;
	
	/*Creating int variables to store numbers scanned from user*/
	int num1 		= 0;
	int num2		= 0;

	/*Scanning the operator from user and store it*/
	printf("(+,-,*,/)\nEnter an operator: ");
	scanf(" %c", &operator);
	
	/*Branching to check on the operator if it's valid --> scan the 2 operands*/
	if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
	{
		/*Scanning the numbers from user and store them*/
		printf("Enter operand 1: ");
		scanf(" %d", &num1);
		printf("Enter operand 2: ");
		scanf(" %d", &num2);
		
		/*Branching with switch to get the result of each operator and print it*/
		switch(operator)
		{
			case '+':
				/*printing the result*/
				printf("%d + %d = %d",num1, num2, num1+num2);
				/*break the loop*/
				break;
			case '-':
				/*printing the result*/
				printf("%d - %d = %d",num1, num2, num1-num2);
				/*break the loop*/
				break;
			case '*':
				/*printing the result*/
				printf("%d * %d = %d",num1, num2, num1*num2);
				/*break the loop*/
				break;
			case '/':
				/*printing the result*/
				printf("%d / %d = %0.2f",num1, num2, (float)num1/num2);
				/*break the loop*/
				break;
		}
		
	}
	/*if user chose another operator --> print invalid*/
	else
	{
		printf("INVALID operator!");
	}
}