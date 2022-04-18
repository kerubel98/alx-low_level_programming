#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - takes sting
 * @s - pointes to sring
 * Return : length of string
 */

int _strlen(char *s)
{
	int lngth;
	char v = *s;

	lngth = strlen(v);

	return (lngth);
}
