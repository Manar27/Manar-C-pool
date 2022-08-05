/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to computes the real roots of an equation
 */
/*printf & scanf*/
#include <stdio.h>
/*sqrt & pow*/
#include <math.h>

void main (void)
{
	/*Creating int variables to store numbers scanned from user*/
	int a = 0;
	int b = 0;
	int c = 0;
	/*Creating float variables to store the roots*/
	float root1 = 0;
	float root2 = 0;
	
	/*Scanning the 3 numbers from user and store them in the 3 int variables*/
	printf("Enter a: ");
	scanf(" %d",&a);
	
	printf("Enter b: ");
	scanf(" %d",&b);
	
	printf("Enter c: ");
	scanf(" %d",&c);
	
	/*Branching to check the conditions*/
	/*if a = 0, there will be either no roots or only one root for this equation*/
	if (a == 0)
	{
		/*if a & b = 0, no roots*/
		if(b == 0)
		{
			/*Print that no roots*/
			printf("No roots");
		}
		/*if a = 0 only, there's only one root for this equation it's value is (-c/b)*/
		else
		{
			/*Calculating the root*/
			root1 = -(float)c / (float)b;
			/*print the root*/
			printf("Only one root = %0.2f", root1);
		}
	}
	/*if b2-4ac < 0, there will be no roots*/
	else if (((b*b)-(4*a*c)) < 0)  /*we can use pow(b,2)*/
	{
		/*Print that no roots*/
		printf("No roots");
	}
	/*if b2-4ac > 0, there will be 2 roots*/
	else
	{
		/*two roots with the givin equations*/
		root1 = (float)((-b + sqrt((b*b) - (4*a*c))) /2*a);
		root2 = (float)((-b - sqrt((b*b) - (4*a*c))) /2*a);
		
		/*print the roots*/
		printf("1st root = %0.2f",root1);
		printf("\n2nd root = %0.2f",root2);
	}
}