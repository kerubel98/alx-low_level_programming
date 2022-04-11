#includ <stdio.h>

/**
 * main - entry point
 *
 * Return: alweys zero
 */
int main(void)
{
	int c;

	for (c = 26; c > 0; c++)

		putchar('a' + c);

	putchar('\n');

	return (0);
}
