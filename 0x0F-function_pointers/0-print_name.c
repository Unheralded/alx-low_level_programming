#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: char * name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
