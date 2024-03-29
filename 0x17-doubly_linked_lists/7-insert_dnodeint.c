#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head of list
 *
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: head of the list
 * @idx: index
 * @n: new data
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0, index = 0;

	i = dlistint_len(*h);

	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}

	temp = *h;

	if (idx == i)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *h;

	while (index < idx)
	{
		temp = temp->next;
		index++;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->prev = temp->prev;
	newnode->next = temp;
	temp->prev->next = newnode;
	temp->prev = newnode;
	return (newnode);
}
