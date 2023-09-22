#include "main.h"

/**
 * _strcat - concatenates string from src to dest
 *
 * @src: pointer to source string
 * @dest: pointer to destination string
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int ldest, lsrc; /*source length and destination lenght*/
	char *destination = dest;

	ldest = 0;
	lsrc = 0;
	while (*dest)
	{
		dest++;
		ldest++;
	}
	while (*src)
	{
		src++;
		lsrc++;
	}
	src = src - lsrc;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (destination);
}
