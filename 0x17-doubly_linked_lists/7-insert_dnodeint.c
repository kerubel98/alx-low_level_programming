#include "lists.h"
/**
 * insert_dnodeint_at_index - instert node at index
 * @h: head pointer
 * @idx: index of the node
 * @n: data of the new node
 * Return:the adders of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (i < idx && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (NULL);
	if (tmp->next == NULL)
	{
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		new->prev = tmp;
		new->next = tmp->next;
		tmp = new->next;
		tmp->prev = new;
	}
	return (new);
}
