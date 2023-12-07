#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head of list
 *
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
	size_t count = 0;
	const dlistint * tmp;

	if(h == NULL)
		return (0);
	tmp = h;
	while(tmp != NULL){
		tmp = tmp->next;
		count ++;
	}
	return (count)
}
