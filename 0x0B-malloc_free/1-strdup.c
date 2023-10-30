#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	ptr = (char *) malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = str[i];

	return (ptr);
}
