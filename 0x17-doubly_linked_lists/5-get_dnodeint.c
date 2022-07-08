#include "lists.h"
/**
 * get_dnedeint_at_index - returns the node at index
 * @head: pointer to the firt node
 * @index: index of the needed node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (count < index && tmp)
	{
		tmp = tmp->next;
		count++;
	}
	if (!tmp)
		return (NULL);
	return (tmp);
}
