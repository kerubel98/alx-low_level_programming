#include <stdlib.h>
#include "main.h"

/*
 * str_concat - concatenate two stringes
 *
 * @s1: frist string
 * @s2: second string
 * Return: pointer to concatednted string
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int s3len;
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[s1len])

		s1len++;

	while (s2[s2len])
		s2len++;

	s3len = s1len + s2len;

	ptr = malloc(sizeof(char) * s3len + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < s1len)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i <= s3len)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}


