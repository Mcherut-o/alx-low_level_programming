#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This function prints minimum number of coins to make change
 * @argc: Number of command line arguments
 * @argv: Array containing program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int amount, i, coinCount;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coinCount = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			coinCount++;
			amount -= coins[i];
		}
	}

	printf("%d\n", coinCount);
	return (0);
}
