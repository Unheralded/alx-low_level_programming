#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: results (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
