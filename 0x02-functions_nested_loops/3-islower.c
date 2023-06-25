#include "main.h"
#include <unistd.h>

/**
*main - Prints output with lowercase checked
*int _islower(int c) - A function that searches for lowercase charaters
*int _putchar(int c) - A function that prints output
*@c - Stores a value
*@r - Stores value
* Return: 1 if c is lowercase and 0 otherwise
*/
int _islower(int c);

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
