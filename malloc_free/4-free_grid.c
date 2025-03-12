#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: grid to free
 * @height: height to free
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
