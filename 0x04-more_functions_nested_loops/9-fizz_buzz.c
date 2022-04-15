#include <stdio.h>

/**
 * main - prints fizz for int divisibele by 3 and buzz for 5
 *
 * Return: value is zero
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ( % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if ( i != 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
