#include "main.h"

/**
 * print_line - prints '_' n times
 *
 * @n: number of times to print line
 * Return: 0 Success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
