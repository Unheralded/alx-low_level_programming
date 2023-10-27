#include "main.h"

/**
 * _puts - prints string to std output
 *
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int a, b;

	for (a = 0; str[a] != 0; a++)
	{
		b = str[a];
		_putchar(b);
	}
	_putchar('\n');
}
