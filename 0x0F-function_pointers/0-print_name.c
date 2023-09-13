#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: string name
 * @f: fun
 *
 * Return: VOID
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
