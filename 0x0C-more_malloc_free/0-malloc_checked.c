#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
}

