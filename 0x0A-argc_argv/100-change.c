#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum amout of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	int coin_counts[5] = {0};
	int i;
	int total_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coin_counts[i]++;
		}
	}
	for (i = 0; i < num_coins; i++)
	{
		total_coins += coin_counts[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
