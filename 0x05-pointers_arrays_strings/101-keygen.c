#include  "main.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randompas - generat random pasword
 *
 * @N: n is parmater
 *
 * Return: return
 *
 */
void randompas(int N)
{
	int i = 0;

	int randomizer = 0;

	srand((unsigned int)(time(NULL)));

	char number[] = "0123456789";

	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter[] = "abcdefghijklmnopqrstuvwyzx";

	char symbols[] = "!@#$^&*?";
	char password[N];

	randomizer = rand() % 4;

	for  (i = 0; i < N; i++)
	{
		password[i] = number[rand() % 10];
		randomizer = rand() % 4;
		printf("%c", password[i]);

	if (randomizer == 1)
	{
		password[i] = number[rand() % 10];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	else if (randomizer == 2)
	{	password[i] = number[rand() % 8];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	else if (randomizer == 3)
	{
		password[i] = LETTER[rand() % 26];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	else
	{
		password[i] = letter[rand() % 26];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	}
}










