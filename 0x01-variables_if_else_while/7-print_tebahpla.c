#include <stdio.h>
/**
*main - A program that prints the alphabets in lowwercase in reverse
*Return: Always 0 (Success)
*/
int main(void)
{
char lowerc;
lowerc = 'z';
while (lowerc >= 'a')
{
putchar(lowerc);
lowerc--;
}
putchar('\n');
return (0);
}
