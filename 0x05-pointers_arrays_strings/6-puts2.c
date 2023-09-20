#include "main.h"

/**
 * puts2 - prints every other string character
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int a, b;

	for (a = 0; str[a] != 0; a += 2)
	{
		b = str[a];
		_putchar(b);
	}
	_putchar('\n');
}
