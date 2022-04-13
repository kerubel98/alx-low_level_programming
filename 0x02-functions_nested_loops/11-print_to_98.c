#include "main.h"

/**
 *print_to_98 - printes num up to 98
 *@n: parameter the function takes it is int type
 *Return: typ is void 
 */
void print_to_98(int n)
{
	int i;

	if (a <= 98)
	{
		for (i = a; i <=98; i++)
			_putchar(i);
	}
	else
	{
		for (i = a; i >= 98; i--)
			_putchar(i);
	}
	_putchar(' ');
	_putchar(',');
}
