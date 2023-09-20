#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	while (s[length] != 0)
	{
		length++;
	}
	while (length >= 0)
	{
		i = s[length];
		_putchar(i);
		length--;
	}
	_putchar('\n');
}
