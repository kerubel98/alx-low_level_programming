#include "main.h"

/**
 * leet - inception
 *
 * @s: parameter string
 *
 * Return: s
 */

char *leet(char *s)
{
	int x;
	int y;

	char cod[] = "aeotl";
	char num[] = "43071";

	for (x = 0; s[x] != '\0'; x++)
	{

		for ( y = 0; cod [x] != '\0'; y++)
		{
			if ( s[x] == cod[y] || s[x] == (cod[y] - 32))
			{
				s[x] == num[y];
				break;
			}
		}
	}
	return (s);
}

