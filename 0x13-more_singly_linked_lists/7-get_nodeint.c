#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: The data at the nth node, NULL if node doesn't exist
 */

int sizeOf(listint_t *head)
{
	int count = 0;
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int n;
	listint_t *tmp;

	n = sizeOf(head);
	if (index > n)
		return (NULL);
	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = head->next;
		i++;
	}
	return (tmp);
}
