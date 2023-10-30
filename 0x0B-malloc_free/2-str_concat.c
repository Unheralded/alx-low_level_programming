#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;
	unsigned int len, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;
	ptr = (char *) malloc(len + 1);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[len1 + j] = s2[j];
	ptr[len] = '\0';

	return (ptr);
}
