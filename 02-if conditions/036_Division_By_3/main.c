/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program takes 5 inputs and prints the number that are divisible by 3
 */ 

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int array to store 5 numbers scanned from user*/
	int numbers[5]			= {0};
	int divisible[5]		= {0}; //worst case is 5
	int counter				= 0;
	int d_count				= 0;
	int flag				= 0;
	
	/*Loop to scan the numbers from user and store them in the array*/
	for(counter = 0 ; counter < 5 ; counter++)
	{
		printf("Enter number %d: ",counter+1);
		scanf(" %d", &numbers[counter]);
	}
	
	/*Loop to seacrh for the divisible numbers by 3 in the array scanned from user*/
	for(counter = 0 ; counter < 5 ; counter++)
	{
		/*Branching to check if each number is divisible by 3 or not*/
		if (numbers[counter] % 3 == 0)
		{
			/*make flag = 1*/
			flag = 1;
			/*store the divisible numbers in another array*/
			divisible[d_count] = numbers[counter];
			/*increase the counter of the other array*/
			d_count++;
		}
	}
	
	/*branching to check if there's any divisible numbers --> flag == 1*/
	if (flag == 1)
	{
		/*print this msg*/
		printf("The numbers that are divisible by 3 : \n");
		/*initialize counter to zero to print the divisible numbers*/
		counter = 0;
		/*loop to print the divisible numbers until we found the zeros --> no divisible after (all 0s)*/
		/*end event --> we found the start of zeros --> the end of divisible numbers*/
		while(divisible[counter] != 0)
		{
			/*print the number*/
			printf("%d\n", divisible[counter]);
			/*increase counter*/
			counter++;
		}
	}
	/*if flag != 1 --> flag == 0 --> no numbers divisible by 3*/
	else
	{
		printf("NO numbers divisible by 3!");
	}
}