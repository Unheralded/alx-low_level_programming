#include "main.h"

/**
 * leet - 1334 text
 *
 * @str: text
 *
 * Return: string pointer
 */
char *leet(char *str)
{
	int i, j;
	char *leet = "aAeEoOtTlL";
	char *replacement = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = replacement[j];
				break;
			}
		}
	}
	return (str);
}
