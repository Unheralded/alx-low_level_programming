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

	b = n - 1;
	for (i = 0; i <= b; i++)
	{
		printf("%d", a[i]);

		if (i < b)
		{
			printf(", ");
		}
	}
	printf("\n");
}
