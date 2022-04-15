#include "main.h"

/**
 * _isupper -returnes 1 for upper case letter
 * @c: is the parmeter
 *
 * Return: the prog returns 1 and zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
        }
}

