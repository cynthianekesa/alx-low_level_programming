#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum of a and b
  * @a: integer a
  * @b: integer b
  *
  * Return:0
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference of a and b
  * @a: int a
  * @b: int b
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul -returns the product of a and b
  * @a: int a
  * @b: int b
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of division of a and b
  * @a: integer a
  * @b: integer b
  *
  * Return:0
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
  * op_mod - returns the remainder of the division of a by b
  * @a: int a
  * @b: int b
  *
  * Return: 0
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
