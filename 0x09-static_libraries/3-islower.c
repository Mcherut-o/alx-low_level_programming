#include "main.h"
/**
 * _isupper - This function checks for lowercase letters
 *@c: Stores values to be checked
 *Return: 1 if c is lowercase
 *      : 0 otherwise
 */
int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
