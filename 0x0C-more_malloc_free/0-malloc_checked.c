#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - gives memeory
 * @b: size
 *
 *
 * Return: void
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

