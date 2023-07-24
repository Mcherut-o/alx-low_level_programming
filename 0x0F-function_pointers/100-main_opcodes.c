#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own executable file
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bts, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < bts; i++)
	{
		if (i == bts - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
