#include "main.h"

/**
 * _islower - checks if character is lower case
 *
 * @c: character to be checked
 * Return: 0 Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
