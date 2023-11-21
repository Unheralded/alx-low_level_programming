#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns sum of 2 integers
 *
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns diff of 2 integers
 *
 * @a: int
 * @b: int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of 2 integers
 *
 * @a: int
 * @b: int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns division result of 2 integers
 *
 * @a: int
 * @b: int
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns division remainder of 2 integers
 *
 * @a: int
 * @b: int
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
