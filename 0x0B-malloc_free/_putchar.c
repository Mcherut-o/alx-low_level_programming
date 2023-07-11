#include "main.h"
#include <unistd.h>

/**
* _putchar - Writes the character s to the stdout
*@s:This is the character to be printed
*Return:Always 0 (Success)
*/

int _putchar(char s)
{
return (write(1, &s, 1));
}
