#include "main.h"
#include <unistd.h>

/**
* _isalpha - A function that searches for lowercase charaters
*@c: Stores a value
* Return: 1 if c is lowercase and 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
