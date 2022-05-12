#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds the ints
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - subtracts the ints
 * @a: first int
 * @b: second int
 * Return: difference
 */

int op_sub(int a, int b)
{
	int def;
	def = a - b;
	return (def);
}
/**
 * op_mul - multiplies the ints
 * @a: first int
 * @b: second int
 * Return: product
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - divides the ints
 * @a: first int
 * @b: second int
 * Return: result
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - remainder of division of ints
 * @a: first int
 * @b: second int
 * Return: remainder
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
