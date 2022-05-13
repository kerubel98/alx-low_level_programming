#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *or;

	va_start(arg, n);

	for (i = 0; i < n - 1; i++)
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
