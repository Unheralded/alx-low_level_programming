#include "main.h"

/**
 * main - print sum of even fibonacci numbers < 4,000,000 starting with 1, 2
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	long int fib;
	long int a = 1;
	long int b = 2;
	long int sum;

	for (i = 1; i < 35; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if ((fib < 4000000) && fib % 2 == 0)
		{
			sum += fib;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
