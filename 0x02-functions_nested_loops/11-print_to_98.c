#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - printes num up to 98
 *@a: parameter the function takes it is int type
 *Return: typ is void
 */
void print_to_98(int a)
{

	if (a <= 98)
	{
	while (a <= 98)

	printf("%d, ", a++);
	printf("%d\n", a);
	}

	else
	{
	while (a >= 98)

	printf("%d, ", a--);
	pintf("%d\n", a);
	}
}
