#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings
* @s1: First input  to concatenate
* @s2: Second input  to concatenate
* Return: Contents of s1 and s2
*       : NULL if failure
*/

char *str_concat(char *s1, char *s2)
{
char *con;
int i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
con = malloc(sizeof(char) * (i + j + 1));
if (con == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
con[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
con[i] = s2[j];
i++, j++;
}
con[i] = '\0';
return (con);
}
