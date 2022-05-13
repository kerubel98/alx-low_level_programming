#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: nothing
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (int i = 0; i < n; i++)
	{
		printf("%i", va_arg(arg, int));
		if (separator != NULL && i < n-1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
