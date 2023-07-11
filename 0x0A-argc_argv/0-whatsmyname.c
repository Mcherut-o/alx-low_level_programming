#include <stdio.h>

/**
 * main - This function prints name of program
 * @argc: Number of command line arguments
 * @argv: Array containing program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
