#include <stdio.h>

/**
 * main - entry point
 * Description: prints alphabet in lower and upper case
 * Return: 0 Always Success
 */
int main(void)
{
	char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
