/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to evaluate the exponential power series
 * e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! +....
 *               0 < x < 1
 * Hint: e^x = T0 + T1 + T2 + ...... + Tn = sum.
 * output : 148.413177 --> need 0.6 float --> and also need number of terms
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variables to store x scanned from user, counter and number of terms*/
	int x				= 0;
	int counter			= 1; //because of 1 at the first of power series
	int iteration_no	= 1; //because of 1 at the first of power series
	
	/*Creating float variables to get the sum and each term (T1, T2,....)*/
	float term			= 1; /*term = term * x/iteration_no --> 1st term = 1*x/1 = x, 
	2nd term =x*x/2=x^2/2!, 3rd term = (x^2/2)*x/3 = x^3/3!*/
	float sum			= 1; //because of 1 at the first of power series
	
	/*Scanning the value from user and store it*/
	printf("Enter value of x: ");
	scanf(" %d",&x);
	
	/*loop to repeat the iterations --> term < 0.0001 */
	while(counter <= 100)
	{
		/*calculate the term in this iteration*/
		term = term * x/counter;
		/*calculate the sum*/
		sum = sum + term;
		/*count(increase) the number of iterations*/
		iteration_no++;
		/*branching to check if the term < 0.0001*/
		if (term < 0.0001) //to satisfy the test case
		{
			/*break the while loop*/
			break;
		}
		else
		{
			/*increase counter of loop*/
			counter++;
		}
	}
	/*print numbers of terms and the Sum */
	printf("Terms = %d, Sum = %f\n",iteration_no ,sum);
	
}