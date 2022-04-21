#include "main.h"

/**
 * _strncat - concatenat two srings
 * @dest: base parameter
 * @src: string that will be appended
 * @n: number of string that would be appaended
 *
 *  Return: pointer value
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;
	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++)
	{
		dest[x] = src[y];
		x++;
		n--;
	}

	return (dest);
}
