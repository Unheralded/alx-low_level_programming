#include "main.h"

/**
 * rot13 - converts string to rot 13 encryption
 *
 * @str: string
 * Return: str pointer
 */
char *rot13(char *str)
{
	char *s = str;
	char c;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z'))
		{
			c = 'a';
			*s = (*s - c + 13) % 26 + c;
		}
		else if ((*s >= 'A' && *s <= 'Z'))
		{
			c = 'A';
			*s = (*s - c + 13) % 26 + c;
		}
		s++;
	}
	return (str);
}
