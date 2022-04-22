#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int x,len;
	x = 0;
	while (a[x] != EOF)
	{
		x++;
	}
	len = x -1;
	for (x = len; x >= 0; x--)
	{
		_putchar(a[x]);
	}
}

