#include "main.h"

/**
 * print_last_digit - A function that prints last digit of a number
 * @l: Checks for last digit in numbers
 * Return: lastdigit
 */

int print_last_digit(int l)
{
int ldigit;
if (l < 0)
{
l = -l;
}
ldigit = l % 10;
{
_putchar(ldigit + '0');
return (ldigit);
}
}
