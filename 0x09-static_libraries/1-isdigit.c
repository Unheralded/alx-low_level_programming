#include "main.h"

/**
 * _isdigit - checks for digit 0 - 9
 *
 * @c: char to check
 * Return: 0 Success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
