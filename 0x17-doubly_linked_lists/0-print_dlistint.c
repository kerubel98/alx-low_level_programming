#include "lists.h"
#include <stdio.h>
/*
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
	return (0);
}
