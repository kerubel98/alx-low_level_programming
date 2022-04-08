#include<stdio.h>

/**
 * main- the progeram startes hear
 *
 *
 *
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putcher((i % 10) + '0');
putcher((j % 10) + '0');

if (i == 8 && j == 9)
continue;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
