#include <stdio.h>
#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: String
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int a, b, c, strlength, e, f;

	a = b = c = strlength = e = f = 0;

	while (s[strlength] != '\0')
		strlength++;

	while (a < strlength && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}

/**
 * main - This function prints minimum number of coins to make change
 * @argc: Number of command line arguments
 * @argv: Array containing program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int total, dgt1, dgt2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	dgt1 = _atoi(argv[1]);
	dgt2 = _atoi(argv[2]);
	total = dgt1 * dgt2;

	printf("%d\n", total);

	return (0);
}
