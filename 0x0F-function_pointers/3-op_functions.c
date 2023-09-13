#include "3-calc.h"

/**
  * op_add - add (a, b)
  * @a: 1st
  * @b: 2nd
  *
  * Return: number
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub a b
  * @a: 1st
  * @b: 2nd
  *
  * Return: num
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mul a b
  * @a: 1st
  * @b: 2nd
  *
  * Return: num
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - div a b
  * @a: 1st
  * @b: 2nd
  *
  * Return: num
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
  * op_mod - mod a b
  * @a: 1st
  * @b: 2nd
  *
  * Return: num
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
