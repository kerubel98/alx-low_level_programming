#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *tmp;
    if (*head == NULL)
        exit;
    else

    while(*head)
    {
        tmp = *head;
        *head = tmp->next;
        free(tmp);
    }
}

