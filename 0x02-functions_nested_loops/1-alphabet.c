#include "main.h"
/**
*print_alphabet - Prints letters in lowercase using putchar function.
*
*/
void print_alphabet(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
_putchar(lc);
}
_putchar('\n');
}
