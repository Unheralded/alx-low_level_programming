#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet in reverse
 * Return: 0 Always Success
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');

	return (0);
}
