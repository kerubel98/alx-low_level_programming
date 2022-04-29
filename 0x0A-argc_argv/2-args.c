#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery of the program
 *
 * @argc: countes command line arguments
 * @argv: arg vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return 0;
}
