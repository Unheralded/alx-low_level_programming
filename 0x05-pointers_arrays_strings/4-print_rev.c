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

	length = 0;
	while (s[length] != 0)
	{
		length++;
	}
	for (length = length - 1; length >= 0; length++)
	{
		i = s[length];
		_putchar(i);
	}
	_putchar('\n');
}
