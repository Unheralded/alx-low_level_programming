#include "main.h"

/**
 * _isupper - checks for upper case char
 *
 * @c: char to check
 * Return: 1 if char is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	return (0);
}
