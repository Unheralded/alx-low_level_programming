#include "main.h"

/**
 * main - print first 50 fibonacci numbers starting with 1, 2
 *
 * Return: 0 Always
 */
int main(void)
{
	int fib;
	int a = 1;
	int b = 2;

	printf("%d, %d", a, b);
	for (a = 2; a < 50; a++)
	{
		fib = a + b;
		printf(", %d", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
