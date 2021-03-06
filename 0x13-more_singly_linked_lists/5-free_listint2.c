#include "lists.h"

/**
 * free_listint2 - frees a list, sets the @head to NULL
 * @head: double pointer to head of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
       	listint_t *tmp;

	if (head == NULL)
	       	exit (1);
       	else
       	{
	       	while(*head)
	       	{
		       	tmp = *head;
		       	*head = tmp->next;
			free(tmp);
		}
	}
}
