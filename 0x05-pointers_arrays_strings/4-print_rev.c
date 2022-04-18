#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -printes string in revers
 * @s: charcter string
 * Return: void
 */

void print_rev(char *s)
{	
	int i, len;

	len = strlen(s);
	char str[len];

	for ( i = 0; i <= len; i++)
	{
		
		str[i] = s[len - i - 1];
		printf("%s\n", str);
	}
}
