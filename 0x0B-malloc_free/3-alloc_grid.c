#include <stdlib.h>
#include "main.h"


/**
 *
 *
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) *width);
		if (ptr[i] == NULL)
		{	
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}	
			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; j <= height; j++)
	{
		for (k = 0; k < width; k++)

			ptr[j][k] = 0;
	}

	return (ptr);	
}
