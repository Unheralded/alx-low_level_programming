#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - calculate str length
 *
 * @str: string
 * Return: string length
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_cat - concatenate string
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *str_cat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = str_len(dest);
	len2 = str_len(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}

/**
 * argstostr - concatenates my program arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string || NULL if faliure
 */
char *argstostr(int ac, char **av)
{
	int length, i;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			length += str_len(av[i]) + 1;
	}

	result = (char *) malloc(length + 1);
	if (result == NULL)
		return (NULL);

	result[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			str_cat(result, av[i]);
			str_cat(result, "\n");
		}
	}

	return (result);
}
