#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints members of dog struct
 * @d: struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", d.name);
		printf("Age: %.1f", d.age);
		printf("Owner: %s", d.owner);
	}
}
