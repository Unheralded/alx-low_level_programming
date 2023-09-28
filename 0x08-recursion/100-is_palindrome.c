#include "main.h"

/**
 * is_palindrome - return 1 if string is palindrome else 0
 *
 * @s: string
 * Return: 1 || 0
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, n - 1));
}
/**
 * check_palindrome - help check if string is palindrome
 * by comapring individual char
 *
 * @s: string
 * @i: first character position
 * @j: last character position
 * Return: 1 || 0
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, i + 1, j - 1));
	}
}
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
