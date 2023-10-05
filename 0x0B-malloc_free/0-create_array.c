#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array size n initialize char c
 *
 * @size: size of array
 * @c: initialization char
 *
 * Return: pointer to array || NULL if faliure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
