#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate s2 to s1
 *
 * @s1: destination string
 * @s2: source string
 *
 * Return: pointer to s1 || NULL if faliure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	ptr[len1] = '\0';
	for (j = 0; j < len2; j++)
	{
		ptr[len2 + i] = s2[i];
	}
	ptr[len1 + len2] = '\0';

	return (ptr);
}
