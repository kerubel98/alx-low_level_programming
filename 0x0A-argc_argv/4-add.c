#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point mathod
 *
 * @argc :argument count
 * @argv: argument vector
 *
 * Return: zero
 *
 */

int main(int argc, char* argv[])
{
	int i, sum = 0;

	if(argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

		printf("Total = %d\n", sum);
	}
	return 0;
}
