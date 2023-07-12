#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * number_ch - A function that checks numbers
 * @str: array str
 * Return: Always 0 (Success)
 */

int number_ch(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - This function prints minimum number of coins to make change
 * @argc: Number of command line arguments
 * @argv: Array containing program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int c;
	int si;
	int result = 0;

	c = 1;
	while (c < argc)
	{
		if (number_ch(argv[c]))

		{
			si = atoi(argv[c]);
			result += si;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", result);

	return (0);
}
