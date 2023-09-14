#include "main.h"

/**
 * times_table - prints 9 multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (result == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(' ');
				if (result >= 10)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + result);
				}
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
