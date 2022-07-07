#include "lists.h"
/**
 * add_dnodeint - creat new node
 * @head: is the pointer to the first node
 * @n: int value in the list
 * Return: no value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
