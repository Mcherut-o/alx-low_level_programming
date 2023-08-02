#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *more_numbers - A function that prints numbers 0-10 14 times
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
putchar('1');
putchar((j % 10) + '0');
}
putchar('\n');
}
}
