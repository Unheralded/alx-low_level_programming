#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create and initialize 2D array
 *
 * @width: no of columns
 * @height: no of rows
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix == 0)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *) malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(matrix[i]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
