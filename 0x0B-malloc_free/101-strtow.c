#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - count the no of words in a string
 *
 * @str: string
 *
 * Return: word count
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - converts string to word
 *
 * @str: string
 * Return: pointer to array of strings || NULL
 */
char **strtow(char *str)
{
	int word_count, word_start, word_index, in_word, i, word_length, j;
	char **result;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	word_count = count_words(str);
	result = char(**) malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	word_index = 0;
	in_word = 0;
	word_start = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '' || str[i] == '\t' || str[i] == '\n')
		{
			if (in_word)
			{
				word_length = i - word_start;
				result[word_index] = (char *) malloc(word_length + 1);
				if (result[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}
			}
			strn_cpy(result[word_index], &str[word_start], word_length);
			result[word_index][word_length] = '\0';
			in_word = 0;
			word_index++;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_start = 1;
		}
	}
	if (in_word)
	{
		word_length = str_len(str) - word_start;
		result[word_index] = (char *) malloc(word_length + 1);
		if (result[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}
		strn_cpy(result[word_index], &str[word_start], word_length);
		result[word_index][word_length] = '\0';
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}

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
 * strn_cpy - copy string
 *
 * @dest: destination string
 * @src: source string
 * @n: length to copy
 * Return: pointer to destination string
 */
char *strn_cpy(char *dest, const char *src, int n)
{
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
		n--;
	}
		return (dest);
}
