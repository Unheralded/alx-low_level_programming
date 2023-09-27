#include "main.h"

/**
 * factorial - return factorial of n if n > 1
 *
 * @n: integer
 * Return: factorial of n
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		f = n * factorial(n - 1);
		return (f);
	}
}
