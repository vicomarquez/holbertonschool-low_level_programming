#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 *
 *@height: integer
 *
 *@grid: integer
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
