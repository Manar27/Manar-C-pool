/*
 * main.c
 *
 * Date: 28/7/2022
 *
 * Author: Manar Hashem
 *
 * Program to calculate profit or loss
 */

/*printf & scanf*/
#include <stdio.h>

void main (void)
{
	/*Creating int variable to store the cost and selling prices scanned from user and calculate the profit/loss*/
	int cost_price		= 0;
	int sell_price		= 0;
	int ProfitOrLoss	= 0;
	
	/*Scanning the cost and selling prices from user and store them*/
	printf("Enter the cost price: ");
	scanf(" %d",&cost_price);
	
	printf("Enter the selling price: ");
	scanf(" %d",&sell_price);
	
	/*Branching to check profit or loss and calculate it*/
	/*check if the cost_price is lower than the sell_price --> profit */
	if (cost_price < sell_price)
	{
		/*calculate the profit*/
		ProfitOrLoss = sell_price - cost_price;
		/*calculate that it's a profit and the amount of it*/
		printf("Profit = %d",ProfitOrLoss);
	}
	
	/*check if the cost_price is greater than the sell_price --> loss */
	else if (cost_price >= sell_price)
	{
		/*calculate the loss*/
		ProfitOrLoss = cost_price - sell_price;
		/*print that it's a loss and the amount of it*/
		printf("Loss = %d!",ProfitOrLoss);
	}
}