#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int first, last, l;
	char c;

	first = 0;
	l = 0;
	while (s[l] != 0)
	{
		l++;
	}
	last = l - 1;
	while (first < last)
	{
		c = s[first];
		s[first] = s[last];
		s[last] = c;

		first++;
		last--;	
	}
}
