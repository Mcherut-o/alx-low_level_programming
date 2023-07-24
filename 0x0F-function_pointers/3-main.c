#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return:Always 0 on success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	p = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == '/' && b == 0) ||
	    (*p == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(p)(a, b));

	return (0);
}
