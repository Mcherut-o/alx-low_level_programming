#include <stdio.h>
/**
*main - A program that prints the alphabetS in lowercase and uppercase
*Return: Always 0 (Success)
*/
int main(void)
{
char lowerc, upperc;
lowerc = 'a';
while (lowerc <= 'z')
{
putchar(lowerc);
lowerc++;
}
upperc = 'A';
while (upperc <= 'Z')
{
putchar(upperc);
upperc++;
}
putchar('\n');
return (0);
}
