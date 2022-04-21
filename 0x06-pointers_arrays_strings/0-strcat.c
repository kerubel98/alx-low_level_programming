#include "main.h"

/**
 * _strcat -concatenate two stringes
 *
 * @dest: the firt string
 * @src: the scond string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int j = 0;
int i;
for (j = 0; j !='\0'; j++)
	;
for (i = 0; i != '\0'; i++)
{
dest [j] = src [i];
j++;
}
dest[j] = '\0';
return (dest);
}
