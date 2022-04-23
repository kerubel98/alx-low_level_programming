#include "main.h"

/**
 * rot13 - encod rot 13
 *
 * @s: string vaiabel
 *
 * Return: s
 */

char *rot13(char *s)
{
	int x, y;
	char input[] = "ABCDEFGHIJKLMNOPRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] ="NOPQRSTUVWXYZABCDEFGHIGKLMnopqrstuvwxyzabcdefghijklm";

	for (x =0; s[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (s);
}
