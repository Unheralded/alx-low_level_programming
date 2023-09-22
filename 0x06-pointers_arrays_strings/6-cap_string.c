#include "main.h"

/**
 * cap_string - capitalize string
 *
 * @str: string
 *
 * Return: string pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	int state = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			state = 1;
		}
		else if (state && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			state = 0;
		}
		else
		{
			state = 0;
		}
		i++;
	}
	return (str);
}
