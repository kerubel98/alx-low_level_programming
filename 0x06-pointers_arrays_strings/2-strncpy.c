#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	int y = 0;

	for (x = 0; src[x] != '\0' && n > 0; x ++, n--)
	{
		dest[y] = src[x];
		y++;
	}
	return (src);
	return (dest);
}
