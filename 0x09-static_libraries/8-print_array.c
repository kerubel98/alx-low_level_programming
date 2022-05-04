#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: arey
 * @n: arrey
 * Return: void
 */

void print_array(int *a, int n)
{
	int len = 0;

	while (len <= n - 1)
	{
		printf("%d", a[len]);
		if (len != n - 1)
		{
			printf(", ");
		}
		len++;
	}
	printf("\n");
}
