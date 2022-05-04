#include "main.h"

/**
 * puts2 - printe the next num
 *
 * @str: parameter
 * Returen: void
 */
void puts2(char *str)
{
	int len = 0;
	int len2 = 0;
	char tmp;

	while (str[len] != 0)
	{
		len++;
	}
	len = len - 1;
	while (len2 <= len)
 	{
		tmp = str[len2];
		str[len2] = str[len];
		str[len] = tmp;
		len2++;
		len--;
	}
}
