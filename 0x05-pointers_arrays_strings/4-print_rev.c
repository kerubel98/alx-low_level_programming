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
	int i, len, temp;
	len = strlen(s);

	for ( i = len; i < 0; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		printf("%s\n", s);
	}
}
		
