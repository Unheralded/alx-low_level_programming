#include "main.h"

/**
 * main - print first 50 fibonacci numbers starting with 1, 2
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	long int fib;
	long int a = 1;
	long int b = 2;

	printf("%ld, %ld", a, b);
	for (i = 2; i < 50; i++)
	{
		fib = a + b;
		printf(", %ld", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
