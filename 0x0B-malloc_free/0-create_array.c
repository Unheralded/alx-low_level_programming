#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create and initialize array of chars
 *
 * @size: array size
 * @c: array initialization char
 *
 * Return: pointer to array || NULL if failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[size] = '\0';

	return (ptr);
}
