#include "main.h"

/**
*puts2 - A function that prints the first character of a string
*@str: Stores value
*/

void puts2(char *str)
{
int lengths = 0;
int l;
while (str[lengths] != '\0')
{
lengths++;
}
for (l = 0; l < lengths; l++)
{
if (l % 2 == 0)
{
putchar(str[l]);
}
}
putchar('\n');
}
