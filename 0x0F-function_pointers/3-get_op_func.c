#include "3-calc.h"


/**
  * get_op_func - get functions
  * @s: operator passed as argument to the program
  *
  * Return: idk
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
    int i;

    while (i < 5)
	{
		if (s == ops[i].op)
			return (ops[i].f);

		i++;
	}

	return (0);
}
