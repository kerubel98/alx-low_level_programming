#include <stdlib.h>
#include "main.h"

/**
 * create_array - creat charter string
 *
 * @size: size of charter string
 * @c: value of charter string
 * Return: string value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
