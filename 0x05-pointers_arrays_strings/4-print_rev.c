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
	int i;

	for ( i = s[strlen(s)]; i <= 0; i--)
	{
		printf("%d\n" , s[i]);
	}
}
		
