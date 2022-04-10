#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf(n,n % 10,((n == 0) ? "and is 0": (((n % 10) > 0) ?  "%n is positive"
		: "and is nagetive"));

/* your code goes there */
return (0);
}
