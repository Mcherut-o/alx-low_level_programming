#include "main.h"

/**
*_strlen - A function that returns the length of a string
*@s: Stores a value 
*Return: Always 0 (Success)
*/

int _strlen(char *s)
{
int lengths = 0;
while(*s != '\0')
{
lengths++;
s++;
}
return (lengths);
}
