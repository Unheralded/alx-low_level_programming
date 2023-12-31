#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i >= j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
