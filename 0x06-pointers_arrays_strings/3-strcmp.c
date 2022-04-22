#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for ( x = 0; s1[x] != 0 && s1[x] == s2[x]; x++)
	{
		if (s1[x] < s2[x])
		{
		
			return (-1);
		}
		else if (s1[x] > s2[x])
		{
			return (1);
		}
		else
		{
			return (0);
		}
		return (0);
	}
}

