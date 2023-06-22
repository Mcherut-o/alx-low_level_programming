#include "main.h"
#include <unistd.h>
/**
*_putchar - Prints the character s to the standard output
*Return: Always 0 (Success)
*/
int _putchar(char s)
{
return (write(1, &s, 1));
}
