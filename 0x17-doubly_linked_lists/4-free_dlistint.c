#include "lists.h"
/**
 * free_dlistint - it frees the memory
 * @head: pointes to the frist nod
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	if (head == NULL)
	{
		exit;
	}
	else
	{
		while (tmp)
		{
			tmp = tmp->next;
			free(tmp);
		}
	}
}
