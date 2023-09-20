#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		b = s[a];
		_putchar(b);
	}
	_putchar('\n');
}
