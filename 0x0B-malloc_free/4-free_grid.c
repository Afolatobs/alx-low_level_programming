#include "main.h"

/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Result: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

