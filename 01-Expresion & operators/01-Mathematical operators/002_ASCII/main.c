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
	/*Creating char variable to scan a character from user*/
	char x = 0;
	
	/*Scanning the character from user*/
	printf("Enter a character: ");
	scanf(" %c",&x);
	
	/*Print the character and the ASCII value of it*/
	/*%c to display the entered char and %d to display the ASCII value of it*/
	printf("The ASCII value of %c is: %d",x,x);
}