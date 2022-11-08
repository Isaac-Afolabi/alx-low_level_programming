#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int h;
for (h = 0; h < height; h++)
free(grid[h]);
free(grid);
}

