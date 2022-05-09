#include <stdio.h>
#include "dog.h"
/**
 *
 * print_dog - prints a struct dog
 * @d: the structure
 * Return: nothing
 *
 */

void print_dog(struct dog *d)
{
	if(d)
	{
		if (d->name)
			printf("name:%s\n", d->name);
		else
			printf("Name :(nil)\n");
	if (d->owner)
		printf("owner:%s\n", d->owner);
		else
			printf("Name :(nil)\n");
	printf("Age: %.6f\n", d->age);

	}
	else
		return;
}
