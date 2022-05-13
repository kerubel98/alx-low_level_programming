#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *or;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		or = (va_arg(arg, char*));
		if (or != NULL)
			printf("%s", or);
		else
			printf("(nil)");

		if(separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
