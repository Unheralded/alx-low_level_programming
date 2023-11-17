#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner name
 *
 * Return: ponter to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;
	char *i, *j;
	int a, b, c;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; *(name + a) != '\0'; a++)
		;
	for (b = 0; *(owner + b) != '\0'; b++)
		;
	i = malloc(a + 1);
	j = malloc(b + 1);
	if (i == NULL || j == NULL)
	{
		free(ptr);
		free(i);
		free(j);

		return (NULL);
	}
	for (c = 0; c <= a; c++)
		*(i + c) = (*name + c);
	for (c = 0; c <= b; c++)
		*(j + c) = (*owner + c);

	ptr->name = i;
	ptr->age = age;
	ptr->owner = j;

	return (ptr);
}
