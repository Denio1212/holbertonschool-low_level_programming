#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees all memory stored in a grid
 * @grid: the grid
 * @height: its height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
