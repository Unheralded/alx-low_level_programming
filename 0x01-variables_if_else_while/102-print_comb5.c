#include <stdio.h>

/**
 * main - entry point
 * Description: print two digit cobinations
 * Return: 0 Always Success
 */
int main(void)
{
	int first, second, third, fourth;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			for (third = first; third <= 9; third++)
			{
				for (fourth = (first == third) ? (second + 1) : 0; fourth <= 9; fourth++)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(' ');
					putchar(third + '0');
					putchar(fourth + '0');

					if (first != 9 || second != 9 || third != 9 || fourth != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
