#include "main.h"
/**
*print_alphabet_x10 - Prints alphabets in lowercase 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
char lowerc;
int i;
for (i = 0; i < 10; i++)
{
for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
{
_putchar(lowerc);
}
_putchar('\n');
}
}
