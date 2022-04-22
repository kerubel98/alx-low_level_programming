#include "main.h"

/**
 * cap_string - capitalize
 * 
 * @s: parameter
 * 
 * Return: s
 */



char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] += 32;

		}
	}
	return (s);
}


