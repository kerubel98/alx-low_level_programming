#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_list -is function that print all the dat of the linked list
 * @h: is list_t tyep parameter
 */

size_t print_list(const list_t *h)
{
    int i =0;

    const list_t  *current_node = h;
    current_node = malloc(sizeof(list_t));
    if (current_node = NULL)
    {
	    printf("p[0] (nill)");
    }

    while (current_node != NULL)
    {
        printf("%d", current_node ->data);
        current_node = current_node ->next;
        i++;
    }
    return (i);
}

