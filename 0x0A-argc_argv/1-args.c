#include <stdio.h>
#include "main.h"

/**
 * main - This function prints name of program
 * @argc: Number of command line arguments
 * @argv: Array containing program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
