#include "main.h"
#include <stdio.h>

/**
 * print_rev -printes string in revers
 * @s: charcter string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for ( i = s[strlen(s)]; i <= 0; i--)
	{
		printf("%s\n" , s[i]);
	}
}
		
