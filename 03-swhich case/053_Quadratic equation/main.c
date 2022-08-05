/*
 * main.c
 *
 * Date: 4/8/2022
 *
 * Author: Manar Hashem
 *
 * Program to get the roots of quadratic equation
 */ 

/*printf & scanf*/
#include <stdio.h>
/*pow & sqrt*/
#include <math.h>

void main (void)
{
	/*Creating int variables to store numbers scanned from user*/
	int a 		= 0;
	int b		= 0;
	int c		= 0;
	
	/*Creating float variables to get the roots*/
	float root1 	 = 0;
	float root2		 = 0;
	float under_sqrt = 0;
	/*creat float variables to get the real and complex parts*/
	float real 		= 0;
	float imaj 		= 0;

	/*Scanning the numbers from user and store them*/
	printf("Enter values of quadratic equation (aX^2+bX+c)\n");
	printf("a: ");
	scanf(" %d", &a);
	printf("b: ");
	scanf(" %d", &b);
	printf("c: ");
	scanf(" %d", &c);
	
	/*calculate the under_sqrt*/
	under_sqrt = (b * b) - (4 * a * c);
	
	/*Branching with switch to check on the under_sqrt if it's > or < or = 0*/
	switch(under_sqrt > 0)
	{
		/*condition is true --> positive under_sqrt --> 2 real roots*/
		case 1:
			/*calculate the roots*/
			root1 = (float)(-b + sqrt(under_sqrt)) / (2 * a);
			root1 = (float)(-b - sqrt(under_sqrt)) / (2 * a);
			
			/*printing the result*/
			printf("Two distinct and real roots exist: %0.2f and %0.2f", root1, root2);
			
			/*break the loop*/
			break;
			
		/*condition is false --> either = 0 or < 0*/
		case 0:
			switch(under_sqrt < 0)
			{
				/*condition is true --> negative under_sqrt --> 2 complex roots*/
				case 1:
					/*calculate the real and complex parts*/
					real = (float) -b/(2*a);
					imaj = (sqrt(under_sqrt * -1))/(2*a);
					
					/*printing the result*/
					printf("Two distinct complex roots exist: %0.2f + i%0.2f and %0.2f - i%0.2f", real, imaj, real, imaj);
					
					/*break the loop*/
					break;
					
				/*condition is false --> only one root exist*/
				case 0:
					/*calculate the root*/
					root1 = root2 = (float) -b/(2 * a);
					
					/*printing the result*/
					printf("Only one root exists: %.2f", root1);
					
					/*break the loop*/
					break;
			}
		break;
	}
}