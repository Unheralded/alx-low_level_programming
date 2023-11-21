#include <stdlib.h>
#include <stdio.h>
/**
 * main - print opcodes number of own function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Exit 1 if one arg is not correct, 2 if byte is negative.
 */
int main(int argc, char *argv[])
{
	short bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x", *((unsigned char *) (main)));
	for (i = 1; i < bytes; ++i)
		printf(" %02x", *((unsigned char *) (main + i)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
