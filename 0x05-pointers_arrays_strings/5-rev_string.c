#include "main.h"

/**
*rev_string - A function that reverses a string
*@s: Stores value for the string
*Return: Always 0 (Success)
*/

void rev_string(char *s)
{
char rev = s[0];
int calc = 0;
int i;
while (s[calc] != '\0')
calc++;
for (i = 0; i < calc; i++)
{
calc--;
rev = s[i];
s[i] = s[calc];
s[calc] = rev;
}
}
