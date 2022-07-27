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
	/*Creating int variable to scan number from user, use the counter in loop and get the rotated numbers*/
	int number			= 0; //the original scanned number
	int counter			= 0; //counter used in looping
	int Rotation_no		= 0; //number of Rotations
	int rotated_left	= 0; //left rotated number
	int rotated_right	= 0; //right rotated number
	int bit_rotated		= 0; //bit to rotaten --> LSB in right rotate and MSB in left rotate
	int bits 			= sizeof(int) * 8; //32 bits used to get the bit_rotated
	
	/*Scanning the number from user and store it*/
	printf("Enter a number: ");
	scanf(" %d", &number);
	
	printf("Enter number of Rotations: ");
	scanf(" %d", &Rotation_no);
	
	/*assign the rotated_left and rotated_right to be the number at first to edit them*/
	rotated_left = number;
	rotated_right = number;
	
	/*Rotate left <<*/
	/*looping to rotate the number with the number of Rotations entered by user*/
	for (counter = 0 ; counter < Rotation_no ; counter++)
	{
		/*get the bit to be rotated --> MSB here --> bit no. 31*/
		bit_rotated = (rotated_left >> (bits - 1)) & 1;
		/*rotate the number to the left and add the bit we got at the front --> at bit 0*/
		rotated_left = (rotated_left << 1) | bit_rotated ;
	}
	
	/*Rotate Right >>*/
	/*looping to rotate the number with the number of Rotations entered by user*/
	for (counter = 0 ; counter < Rotation_no ; counter++)
	{
		/*get the bit to be rotated --> LSB here --> bit no. 0*/
		bit_rotated = (rotated_right >> (bits - 1)) & 1;
		/*rotate the number to the right and add the bit we got at the end --> at bit 31*/
		rotated_right = (rotated_right >> 1) | (bit_rotated >> bits-1) ;
	}
	
	/*printing the number after rotate left and right*/
	printf("%d left rotated %d times = %d\n",number,Rotation_no, rotated_left);
	printf("%d right rotated %d times = %d",number,Rotation_no, rotated_right);
}
	