#include "main.h"

/**
*puts_half -A function that prints half a string followed by a new line
*@str:Stores values
*/

void puts_half(char *str)
{
int length = 0;
int i, start;
while (str[length] != '\0')
{
length++;
}
start = length / 2;
for (i = start; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
