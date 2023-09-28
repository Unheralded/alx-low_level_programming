#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of n || -1 if its not a perfect square
 *
 * @n: integer
 * Return: sqrt || -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		return (_sqrt_find(n, 1));
	}
}
/**
 * _sqrt_find - helps find sqrt of n via indirect recursion
 *
 * @n: integer
 * @guess: iterative test integer
 * Return: -1 if n is not perfect square || sqrt n
 */
int _sqrt_find(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_find(n, guess + 1));
	}
}
