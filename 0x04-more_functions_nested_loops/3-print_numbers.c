#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
