#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	int p;
	int m;
	int k = 0;
	int len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while(s1[i])
		i++;
	while(s2[j])
		j++;
	if (j > n)
		j = n;
	len = i + j;


	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
		ptr[k++] = s1[p];
	for (m = 0; m < j; m++)
		ptr[k++] = s2[m];

	ptr[k] = '\0';
	return (ptr);
}




