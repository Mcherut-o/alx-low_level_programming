#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Function returning a pointer to  2 dimensional array
* @width: input
* @height: input
* Return: NULL on failure
*       : if width/height is 0 /negative,NULL
*/

int **alloc_grid(int width, int height)
{
int **d;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
d = malloc(sizeof(int *) * height);
if (d == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
d[i] = malloc(sizeof(int) * width);
if (d[i] == NULL)
{
for (; i >= 0; i--)
free(d[i]);
free(d);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
d[i][j] = 0;
}
return (d);
}
