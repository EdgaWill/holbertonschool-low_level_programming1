#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by you
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == 0 || height == 0)
		return;
	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
