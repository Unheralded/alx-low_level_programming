#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lower case
 * Return: 0 Always Success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
