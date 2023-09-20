#include "main.h"

/**
 * puts_half - prints half string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, n;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		n = a / 2;
	}
	else
	{
		n = (a - 1) / 2;
	}

	while (str[n] != '\0')
	{
		b = str[n];
		_putchar(b);
		n++;
	}
	_putchar('\n');
}
