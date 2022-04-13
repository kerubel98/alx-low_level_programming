#include "main.h"

/**
 *print_to_98 - printes num up to 98
 *@a: parameter the function takes it is int type
 *Return: typ is void
 */
void print_to_98(int a)
{
	int i;

	if (a <= 98)
	{
		for (i = a; i <=98; i++)
			_putchar('%d, ', i);
	}
	else
	{
		for (i = a; i >= 98; i--)
			_putchar('%d, ', i);
	}
}
