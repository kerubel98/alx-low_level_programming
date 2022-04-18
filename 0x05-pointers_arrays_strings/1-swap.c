#include "main.h"

/**
 * swap_int - the function swaps n to b
 *
 * @*a: is pointer
 * @*b: is pointer
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
