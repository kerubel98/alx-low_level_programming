#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: the data to enter for the new node
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	while (tmp)
	{
		if (count = idx)
		{
			new->next = tmp->next;
			tmp->next = new;
		}
		count++;
		tmp = tmp->next;
	}
	return (new);
}
