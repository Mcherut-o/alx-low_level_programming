#include "main.h"

/**
*print_rev -A function that prints a string in reverse followed by a new line
*@s: Stores values
*Return: Always 0 (Success)
*/
void print_rev(char *s)
{
int lengths = 0;
int l;
while (*s != '\0')
{
lengths++;
s++;
}
s--;
for (l = lengths; l > 0; l--)
{
putchar(*s);
s--;
}
putchar('\n');
}
