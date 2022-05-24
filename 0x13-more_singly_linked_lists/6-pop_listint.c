#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns its data
 * @head: the head node of the list
 * Return: data of head node, or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
