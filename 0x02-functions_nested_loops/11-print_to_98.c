#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - A function that displays numbers
 *@n: Stores values to check the numbers
 *Return : Always 0 (Success)
 */

void print_to_98(int n)
{
int display;
display = (n <= 98) ? 1 : -1;
printf("%d", n);
while (n != 98)
{
n += display;
putchar(',');
putchar(' ');
printf("%d", n);
}
putchar('\n');
}
