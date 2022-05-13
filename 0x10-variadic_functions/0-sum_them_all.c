#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sumantion of var arg
 * @n: number of ardumentes pased
 * @... :elpsis sign that indecate the prog take varabel num of arguments
 * Return: value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int value = 0, i;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		value += va_arg(arg, int);
	}
	va_end(arg);

	return (value);

}
