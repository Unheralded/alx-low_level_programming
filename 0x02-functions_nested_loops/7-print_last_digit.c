#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @r: number to check
 * Return: 0 Success
 */
int print_last_digit(int r)
{
	int j;

	if (r < 0)
	{
		r = -r;
	}
	j = r % 10;
	_putchar('0' + j);

	return (j);
}
