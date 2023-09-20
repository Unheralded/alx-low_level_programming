#include "main.h"

/**
 * print_array - prints first n elements of an array
 *
 * @a: array
 * @n: no of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	b = n - 1;
	printf("%d", a[b]);
	printf("\n");
}
