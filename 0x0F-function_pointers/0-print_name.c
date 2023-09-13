#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_name - prints name
  * @name: the name
  * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		return;
}
