#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: the list to check
 * Return: the number of elements in the lists
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
