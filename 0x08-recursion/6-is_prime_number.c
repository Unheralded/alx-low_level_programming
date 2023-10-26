#include "main.h"

/**
 * is_prime_number - return 1 if n is prime else return 0
 *
 * @n: number to check
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}
/**
 * find_prime - help check if n is prime
 *
 * @n: integer to check
 * @i: iteration integer
 *
 * Return: 1 if prime 0 else
 */
int find_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, i + 1));
	}
}
