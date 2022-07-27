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
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	/*Creating float variable to store the ratio*/
	float Ratio = 0;
	
	/*Scanning the 4 numbers from user and store them in the 4 int variables*/
	printf("Enter Integer value one: ");
	scanf(" %d",&a);
	
	printf("Enter Integer value two: ");
	scanf(" %d",&b);
	
	printf("Enter Integer value three: ");
	scanf(" %d",&c);
	
	printf("Enter Integer value four: ");
	scanf(" %d",&d);
	
	/*Branching to check the condition*/
	if (c-d != 0)
	{
		/*calculate the ratio -- we use casting to float*/
		Ratio = (float)(a+b)/(float)(c-d);
		/*Print the ratio with only the first two digits*/
		printf("Ratio is %0.2f", Ratio);
	}
	else
	{
		/*print a msg to the user if the condition is false*/
		printf("You can't divide by zero!");
	}
}