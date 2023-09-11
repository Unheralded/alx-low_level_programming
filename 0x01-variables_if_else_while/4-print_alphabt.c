#include <stdio.h>

/**
 * main - entry point
 * Description: prints alphabet in lower case except q and e
 * Return: 0 Always Success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');

	return (0);
}
