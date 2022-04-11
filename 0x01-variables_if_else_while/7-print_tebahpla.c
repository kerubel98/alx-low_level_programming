#includ <stdio.h>

/**
 * main - entry point
 *
 * Return: alweys zero
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)

		putchar(c);

	putchar('\n');

	return (0);
}
