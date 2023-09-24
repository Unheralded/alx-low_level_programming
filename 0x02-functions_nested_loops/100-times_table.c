#include "main.h"

/**
 * print_times_table - print n times table
 *
 * @n: times table range
 * Return: void
 */
void print_times_table(int n)
{
	int result, i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(",%4d", result);
			}
		}
		_putchar('\n');
	}
}
