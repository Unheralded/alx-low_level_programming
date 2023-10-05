#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to duplicated string
 *
 * @str: string to be duplicated
 * Return: pointer to duplicate string || NULL if unsuccessful
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;
	unsigned int size = sizeof(str);

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
