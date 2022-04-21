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
	int i, j;
	i = 0;
	j = 0;

	while ((dest[i] = src[j]) != '\0')
	{
			i++;
			j++;
			n--;
	if (n < 0)
	{
		break;
	}
	}
	return dest;
			
}
