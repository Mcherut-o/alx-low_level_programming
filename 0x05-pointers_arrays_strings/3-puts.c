#include "main.h"

/**
*_puts - A function that prints a string followed by new line
*@str: Stores value to be pointed
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
