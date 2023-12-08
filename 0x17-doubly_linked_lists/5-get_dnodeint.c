#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * @head: head of list to search from
 * @index: index of node
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return 0;
	tmp = head;

	while (i < index)
	{
		tmp = tmp->next;
		i++;
		if(tmp == NULL)
			return (0);
	}
	return (tmp);
}
