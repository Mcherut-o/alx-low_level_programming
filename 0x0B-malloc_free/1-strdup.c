#include "main.h"
#include <stdlib.h>
/**
* _strdup - A function that returns a pointer to a new string
* @str: A character
* Return: A pointer to string
*       : NULL if str = NULL
*/

char *_strdup(char *str)
{
char *m;
int i, j = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
m = malloc(sizeof(char) * (i + 1));
if (m == NULL)
return (NULL);
for (j = 0; str[j]; j++)
m[j] = str[j];
return (m);
}
