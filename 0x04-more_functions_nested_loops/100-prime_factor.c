#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	long int number, factor;

	number = 612852475143;
	for (factor = 2; factor < number; factor++)
	{
		if (number % factor == 0)
		{
		number /= factor;
		}
	}

	printf("%ld\n", factor);
	return (0);
}
