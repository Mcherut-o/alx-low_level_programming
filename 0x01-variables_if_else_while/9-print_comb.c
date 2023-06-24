#include <stdio.h>
/**
*main - Prints numbers in ascending order with commaand space
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
}
return (0);
} 
