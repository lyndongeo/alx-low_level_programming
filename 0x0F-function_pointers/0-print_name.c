#include "function_pointers.h"

/**
 * print_name - it prints name.
 * @name: input name.
 * @f: is function pointer.
 *
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
