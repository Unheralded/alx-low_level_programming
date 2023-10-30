#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory allocate in alloc_grid function
 *
 * @grid: 2D array
 * @height: number of rows in 2D array
 *
 * Return: Void
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
