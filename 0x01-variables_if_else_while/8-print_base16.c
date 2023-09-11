#include <stdio.h>

/**
 * main - entry point
 * Description: print base 16 numbers
 * Return: 0 Always Success
 */
int main(void)
{
	char num;
	char hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
