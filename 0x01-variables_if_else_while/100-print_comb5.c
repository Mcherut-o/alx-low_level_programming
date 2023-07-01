#include <stdio.h>

/**
 *main - A program that prints all the possible combinations of 2 digits
 *Return:Always 0 (Success)
 */

int main(void)
{
int num1, num2;
for (num1 = 0; num1 < 9; num1++)
{
for (num2 = num1 + 0; num2 < 10; num2++)
{
putchar(num1 + '0');
putchar(num2 + '0');
{
if (num1 == 9 && num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
