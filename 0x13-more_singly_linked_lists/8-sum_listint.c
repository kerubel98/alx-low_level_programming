#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: The data at the nth node, NULL if node doesn't exist
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
