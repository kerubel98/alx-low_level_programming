#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry poinr of the program
 *
 * @argc: countes argument passed to main
 * @argv: caracter pointer
 * Return: zero
 */

int main(int argc, char* argv[])
{
	int c;
	(void)argv;

	for(c = 0; c <= argc; c++)
	{}
	printf("%d\n", c - 2);

	return 0;
}
