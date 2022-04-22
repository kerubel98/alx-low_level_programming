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
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] + 32;

		}
	}
	return (s);
}


