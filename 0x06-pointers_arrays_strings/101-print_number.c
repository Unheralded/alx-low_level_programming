#include "main.h"
#include <limits.h>
/**
 * print_number - prints number
 *
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		print_number(INT_MIN / 10);
		_putchar('0' - (INT_MIN % 10));
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
