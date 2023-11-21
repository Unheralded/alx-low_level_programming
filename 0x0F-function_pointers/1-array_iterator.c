#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate through array
 *
 * @array: pointer to array
 * @size: array size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
