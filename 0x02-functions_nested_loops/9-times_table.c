#include "main.h"

/**
 *times_table - Afunction that does multiplication
 *Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j, times;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
times = i * j;
if (j == 0)
{
_putchar('0');
}
else if (times < 10)
{
_putchar(' ');
_putchar(times + '0');
}
else
{
_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
