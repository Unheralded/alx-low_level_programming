#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - initializes 2D array with 0
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer to array || NULL if width of height is 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(**ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
