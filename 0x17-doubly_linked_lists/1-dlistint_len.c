#include "lists.h"
/**
 * dlistint_len - countes number of nodes in the list
 * @h: pointer to the first node
 * Return: the num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
