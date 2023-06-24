#include "main.h"
#include <unistd.h>
/**
*_putchar - Prints the character s to the standard output
*Return: Always 0 (Success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
