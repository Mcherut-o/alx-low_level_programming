#include "main.h"
#include <stdlib.h>
/**
* create_array - Function that creates an array of size size and assigns char c
* @size: This is the size of array
* @c:This is the character to be assigned
* Return:A pointer to array
*       :Null if fail
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
s = malloc(sizeof(char) * size);
if (size == 0 || s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
