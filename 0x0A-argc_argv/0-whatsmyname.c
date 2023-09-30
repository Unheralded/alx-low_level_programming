#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (1);
	}

	printf("%s\n", argv[0]);
	return (0);
}
