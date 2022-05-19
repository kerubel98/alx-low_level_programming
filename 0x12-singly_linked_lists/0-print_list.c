#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -is function that print all the dat of the linked list
 * @h: is list_t tyep parameter
 */

size_t print_list(const list_t *h)
{
    int i = 0;

    while (h)
    {
   	 if (h ->str == NULL)
	 {
		 printf("p[0] (nill)");
	 }
	 else
	 {
		 printf("[%i] %s", h->len ,h->str);
	 }
	 i++;
    }
    return (i);
	    
}

