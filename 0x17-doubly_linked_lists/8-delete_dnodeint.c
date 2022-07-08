#include "lists.h"
/**
 * delete_dnodeint_at_index - delat node at index
 * @head: pointer to the frist node
 * @index: index of the node to be removed
 * Return: int no 1 if succes else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2;
	dlistint_t *tmp;
	unsigned int i = 0;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		return (-1);
	}
	else
	{
		temp2 = temp->next->next;
		temp2->prev = temp;
		tmp = temp->next;
		temp->next = temp2;
		free(tmp);
		return (1);
	}
}
