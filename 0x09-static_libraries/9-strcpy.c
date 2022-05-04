#include "main.h"

/**
 * _strcpy - chages to ineger
 * @dest: one of the parameter
 * @src: one of the parameter
 * Return: zero
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (len2 <= len)
	{
		dest[len2] = src[len2];
		len2++;
	}
	return (dest);
}
