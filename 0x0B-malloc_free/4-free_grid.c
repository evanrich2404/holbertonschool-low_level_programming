#include "main.h"
/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: input one
 * @height: input two
 */
void free_grid(int **grid, int height)
{
	for (; height > 0; height--)
	{
		free(grid[height - 1]);
	}
	free(grid);
}
