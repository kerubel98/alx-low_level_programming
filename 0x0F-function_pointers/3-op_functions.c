#include "3-calc.h"

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

int op_sub(int a, int b)
{
	int def;
	def = a - b;
	return (def);
}
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
}
