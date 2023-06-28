#include "main.h"
#include <stdio.h>

/**
 *print_numbers - A function that prints numbers 0-9
 *putchar - A function that outputs values
 *Return : void
 */

void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
putchar('\n');
}
