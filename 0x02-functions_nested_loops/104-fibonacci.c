#include "main.h"

/**
 * main - print first 98 fibonacci numbers starting with 1, 2
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned int fib;
	unsigned a = 1;
	unsigned b = 2;

	printf("%u, %u", a, b);
	for (i = 2; i < 98; i++)
	{
		fib = a + b;
		printf(", %u", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
