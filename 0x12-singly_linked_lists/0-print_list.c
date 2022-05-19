#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the no of nodes
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
		 h = h->next;
		 i++;
	 }
    }
    return (i);

}

