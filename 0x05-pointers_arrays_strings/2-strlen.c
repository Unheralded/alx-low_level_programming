#include "main.h"

/**
 * _strlen - find length of string
 *
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
