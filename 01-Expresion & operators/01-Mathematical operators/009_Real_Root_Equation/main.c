/*
 * main.c
 *
 *
 * Author: Manar Hashem
 */ 

/*printf & scanf*/
#include <stdio.h>
/*sqrt & pow*/
#include <math.h>

void main (void)
{
	/*Creating int variables to scan numbers from user*/
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
	/*if a = 0 and b = 0, there're no roots for this equation*/
	if (a == 0 && b == 0)
	{
		/*Print that no roots*/
		printf("No roots");
	}
	/*if a = 0, there's only one root for this equation it's value is (-c/b)*/
	else if (a == 0)
	{
		/*Calculating the root*/
		root1 = -(float)c / (float)b;
		/*Print the root*/
		printf("Only one root = %0.2f", root1);
	}
	else if ((b*b)-(4*a*c) < 0)  /*we can use pow(b,2)*/
	{
		/*Print that no roots*/
		printf("No roots");
	}
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