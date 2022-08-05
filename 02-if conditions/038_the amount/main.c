/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to print minimum number of notes
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the amount scanned from user and calculate number of notes requried*/
	int amount		= 0;
	int note_500	= 0;
	int note_100	= 0;
	int note_50		= 0;
	int note_20		= 0;
	int note_10		= 0;
	int note_5		= 0;
	int note_2		= 0;
	int note_1		= 0;
	
	/*Scanning the amount from user and store it*/
	printf("Enter amount: ");
	scanf(" %d",&amount);
	
	/*Branching to calculate how many notes of (500, 100, 50, 20, 10, 5, 2, 1) requried for the amount*/
	/*check if the amount is greater than 500 */
	if (amount >= 500)
	{
		/*calculate note_500 and the new amount*/
		note_500 = amount / 500;
		amount 	-= note_500 * 500;
	}
	
	/*check if the amount is greater than 100 */
	if (amount >= 100)
	{
		/*calculate note_100 and the new amount*/
		note_100 = amount / 100;
		amount 	-= note_100 * 100;
	}
	
	/*check if the amount is greater than 50 */
	if (amount >= 50)
	{
		/*calculate note_50 and the new amount*/
		note_50 = amount / 50;
		amount -= note_50 * 50;
	}
	
	/*check if the amount is greater than 20 */
	if (amount >= 20)
	{
		/*calculate note_20 and the new amount*/
		note_20 = amount / 20;
		amount -= note_20 * 20;
	}
	
	/*check if the amount is greater than 10 */
	if (amount >= 10)
	{
		/*calculate note_10 and the new amount*/
		note_10 = amount / 10;
		amount -= note_10 * 10;
	}
	
	/*check if the amount is greater than 5 */
	if (amount >= 5)
	{
		/*calculate note_5 and the new amount*/
		note_5 = amount / 5;
		amount -= note_5 * 5;
	}
	
	/*check if the amount is greater than 2 */
	if (amount >= 2)
	{
		/*calculate note_2 and the new amount*/
		note_2 = amount / 2;
		amount -= note_2 * 2;
	}
	
	/*check if the amount is greater than 1 */
	if (amount >= 1)
	{
		/*calculate note_1*/
		note_1 = amount;
	}
	
	/*printing the results*/
	printf("Total number of notes = \n");
	printf("500 = %d\n",note_500);
	printf("100 = %d\n",note_100);
	printf("50  = %d\n",note_50);
	printf("20  = %d\n",note_20);
	printf("10  = %d\n",note_10);
	printf("5   = %d\n",note_5);
	printf("2   = %d\n",note_2);
	printf("1   = %d\n",note_1);
}