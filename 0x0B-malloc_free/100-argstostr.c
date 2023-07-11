#include "main.h"
#include <stdlib.h>

/**
* argstostr - A function that splits strings into words
* @ac: integer
* @av: character
* Return: NULL if function fails
*/

char *argstostr(int ac, char **av)
{
int w, x, y = 0, z = 0;
char *s;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (w = 0; w < ac; w++)
{
for (x = 0; av[w][x]; x++)
z++;
}
z += ac;
s = malloc(sizeof(char) * z + 1);
if (s == NULL)
return (NULL);
for (w = 0; w < ac; w++)
{
for (x = 0; av[w][x]; x++)
{
s[y] = av[w][x];
y++;
}
if (s[y] == '\0')
{
s[y++] = '\n';
}
}
return (s);
}
