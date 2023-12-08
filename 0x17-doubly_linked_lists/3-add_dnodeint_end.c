#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of a list
 * @head: head of the list
 * @n: new data
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;

	tmp = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (0);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (tmp == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	newnode->prev = tmp;
	tmp->next = newnode;
	return (newnode);
	free(newnode);
}
