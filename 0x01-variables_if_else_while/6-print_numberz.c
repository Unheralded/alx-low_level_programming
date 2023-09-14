#include <stdio.h>

/**
 * main - entry point
 * Description: print digits using putchar()
 * Return: 0 Success
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');

	return (0);
}