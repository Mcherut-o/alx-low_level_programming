#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid
* @grid: 2dimensional grid
* @height: Height dimension of the grid
* Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
int d;
for (d = 0; d < height; d++)
{
free(grid[d]);
}
free(grid);
}
