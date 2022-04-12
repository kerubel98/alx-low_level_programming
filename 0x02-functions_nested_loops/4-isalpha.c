#include "main.h"

/**
 *_isalpha -chacke wather it is no or char
 * @c: is the return type
 *
 * Return: int is the return type
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

