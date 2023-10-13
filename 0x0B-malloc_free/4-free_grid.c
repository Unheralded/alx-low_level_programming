#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory allocated in alloc_grid function
 *
 * @grid: memory pointer
 * @height: array height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
