#include "main.h"

/**
 * _strncat - concatenates src to cat upto n bytes
 *
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int ldest = 0;

	while (dest[ldest] != '\0')
	{
		ldest++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (dest);
}
