#include "main.h"

/**
 * _isalpha - returns 1 if c is alphabet 0 otherwise
 *
 * @c: int to check
 * Return: 0 Always Success
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
