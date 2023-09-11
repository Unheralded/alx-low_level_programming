#include <stdio.h>

/**
 * main - entry point
 * Description: printing all possible combinations of single digit numbers
 * Return: 0 Success
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
