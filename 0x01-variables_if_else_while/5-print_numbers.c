#include <stdio.h>

/**
 * main - entry point
 * Description: print all single digit base 10 numbers from 0
 * Return: 0 Success
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
		printf("%d", base);
	printf("\n");

	return (0);
}
