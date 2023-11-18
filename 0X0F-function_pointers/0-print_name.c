#include "function_pointers.h"
#include <stdio.h>

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
	if (name != NULL)
		f(name);
}
