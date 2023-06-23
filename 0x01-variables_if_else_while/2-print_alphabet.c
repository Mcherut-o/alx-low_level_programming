#include <stdio.h>
/**
*main - A program that prints the alphabets in lowwercase
*Return: Always 0 (Success)
*/
int main(void)
{
char lowerc;
lowerc = 'a';
while (lowerc <= 'z')
{
putchar(lowerc);
lowerc++;
}
putchar('\n');
return (0);
}
