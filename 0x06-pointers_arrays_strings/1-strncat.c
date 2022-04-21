#include "main.h"

/**
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;
	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n == 0; y++)
	{
		dest[x] = src[y];
		x++;
		n--;
	}
	dest[x] = '\0';
	return (dest);
}
