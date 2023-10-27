#include <stdio.h>
#include <stdlib.h>

/**
 * main - Find the sum of positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = 0;
		int j = 0;
		char current = argv[i][0];

		while (current != '\0')
		{
			if (current < '0' || current > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (current - '0');
			j++;
			current = argv[i][j];
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
