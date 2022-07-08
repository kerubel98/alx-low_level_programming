#include "lists.h"

/**
 * sum_dlistint -sums all data in a list
 * @head: pointes to the first node in the list
 * Return: the sum value
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		sum += tmp->n;
	}
	return (sum);
}
