#include "main.h"

/**
 * print_last_digit - print last digit of int
 *
 * @a: function parameter
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * (a % 10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = a % 10;
		_putchar(b + '0');
		return (b);
	}
}
