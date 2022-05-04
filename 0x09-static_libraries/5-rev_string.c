#include "main.h"

/**
 * rev_string - revers string
 *
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int len2 = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len2 <= len)
	{
		tmp = s[len2];
		s[len2] = s[len];
		s[len] = tmp;
		len2++;
		len--;
	}
}
