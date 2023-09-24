#include "main.h"

/**
 * main - print first 50 fibonacci numbers starting with 1, 2
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long long fib;
	unsigned long long a = 1;
	unsigned long long b = 2;

	printf("%llu, %llu", a, b);
	for (int i = 2; i < 50; i++)
	{
		fib = a + b;
		printf(", %llu", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
