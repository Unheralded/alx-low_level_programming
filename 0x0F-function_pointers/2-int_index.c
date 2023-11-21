#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches through array to compare values
 *
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to function used to compare array
 *
 * Return: first element where result of cmp != 0
 * || -1 if size <= 0 || array || size == NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
