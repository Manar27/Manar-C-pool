/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to calculate the wind chill index (WCI)
 *
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating float variables to store wind speed and temperature in Fahrenheit scanned from user
	and get the WCI*/
	float wind_speed	= 0;
	float temp_f		= 0;
	float WCI			= 0;
	
	/*Scanning the wind_speed from user and store it*/
	printf("Enter wind speed in mph (-1 to stop): ");
	scanf(" %f",&wind_speed);
	
	/*branching to check if wind speed entered by user not equal -1 --> continue*/
	if(wind_speed != -1)
	{
		/*Scanning the wind_speed from user and store it*/
		printf("Enter temperature in Fahrenheit: ");
		scanf(" %f",&temp_f);
		
		/*branching to calculate the WCI*/
		/*if (0 <= v <= 4) then WCI = t*/
		if(wind_speed >= 0 && wind_speed <= 4)
		{
			WCI = temp_f;
		}
		
		/*if (v >=45) then WCI = 1.6t -55*/
		else if(wind_speed >= 45)
		{
			WCI = (1.6 * temp_f) - 55;
		}
		
		/*otherwise, WCI = 91.4 + (91.4 -t)(0.0203v -0.304(v)1/2 -0.474).*/
		else
		{
			WCI = 91.4 + (91.4 - temp_f) * ((0.0203 * wind_speed) - ((0.304 * wind_speed)/2) - 0.474);
		}	
		
		/*print the wind speed, temperature and WCI */
		printf("For wind speed = %0.2f and temperature = %0.2f\nWinf Chill Index = %0.2f",wind_speed ,temp_f, WCI);
	}
	
	/*if speed == -1 --> stop program*/
	else
	{
		/*print a msg to user before stopping the program*/
		printf("Program stopped.. Thank you!");
	}
	
}