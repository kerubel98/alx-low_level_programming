#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * create_array - creat charter arrry
 *
 * @size: size of the arry
 * @c: charter intu the arry
 * Return: sreing value
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	str = malloc(sizeof(char * size));
	if (size == 0 || str == NULL)
		return NULL;

	i = 0;
	while ( i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
