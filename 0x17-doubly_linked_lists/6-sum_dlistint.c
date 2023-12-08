#include "lists.h"

/**
 * sum_dlistint - calculate sum of all data in list
 * @head: head of the list
 *
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
