#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main - display if n is greater than 5 | zero | less than 6
 *Description: chdeck if n is greater than 5, is 0 ore less than 6
 *Return: 0 always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
