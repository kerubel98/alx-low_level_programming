#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creat duplicate string for given string paramater
 *
 *
 * @str: string parmeter given
 *
 * Return: the duplicated string
 *
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	while (str[j])
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j + 1] = 0;
	return (ptr);
}

