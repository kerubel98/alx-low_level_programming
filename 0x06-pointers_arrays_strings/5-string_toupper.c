#include "main.h"

/**
 * string_toupper - changes to capital letter
 *
 * @s: char string to be changed
 * Return: s
 *
 */

char *string_toupper(char *s)
{
	int x;

	 for (x = 0; s[x] != '\0'; x++)
	 {
		 if (s[x] > 96 && s[x] < 123)
		 {
			 s[x] -= 32;
		 }
	 }
	 return (s);
}
