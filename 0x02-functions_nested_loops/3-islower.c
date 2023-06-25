#include "main.h"
#include <unistd.h>

/**
* _islower - A function that searches for lowercase charaters
*@c: Stores a value
* Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
