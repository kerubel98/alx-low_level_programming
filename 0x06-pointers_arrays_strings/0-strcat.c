#include "main.h"

/**
 * _strcat -concatenate two stringes
 *
 * @dest: the firt string
 * @src: the scond string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
int j, i;

for (j = 0; dest[j] !='\0'; j++)
	;
for (i = 0; src[i] != '\0'; i++)
{
dest [j] = src [i];
j++;
}
dest[j] = '\0';
return (dest);
}
