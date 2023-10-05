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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
