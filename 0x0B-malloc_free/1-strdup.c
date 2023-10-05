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
	unsigned int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}