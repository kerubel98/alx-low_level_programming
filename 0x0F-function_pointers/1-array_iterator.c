#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - performes whatver action performes on array
 * @array: is parrameter to be passed to action
 * @size: tayp size_t parameter
 * @action: is function to be performed
 * @Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;

	for(i = 0; i < size; i++)
		p(array[i]);
}
