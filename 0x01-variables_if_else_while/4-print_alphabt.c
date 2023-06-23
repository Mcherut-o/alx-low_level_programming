#include <stdio.h>
/**
*main - A program that prints the alphabets in lowwercase without q and e
*Return: Always 0 (Success)
*/
int main(void)
{
char lowerc;
lowerc = 'a';
while (lowerc <= 'z')
{
if (lowerc == 'e' || lowerc == 'q')
{
	lowerc++;
	continue;
}
putchar(lowerc);
lowerc++;
}
putchar('\n');
return (0);
}
