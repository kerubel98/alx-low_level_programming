#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 *
 * Return:0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d %s\n", n, n % 10,
		((n % 10) == 0) ? "and i 0"
		:(((n % 10) >5) ? "and greater than 5"
		: "and is les than 6 and not 0"));

	return (0);
}
