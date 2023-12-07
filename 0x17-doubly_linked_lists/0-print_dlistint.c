#include "list.h"
/**
 * print_dlistint - prints all elements of dll
 * @h: head of the list
 *
 * Return: counts of node
 */

size_t print_dlistint(const dlistint_t *h);{
const dlistint_t *h;
size_t count = 0;
tmp = h;
while(tmp* != NULL){
printf("%d", tmp->n);
tmp = tmp->next;
count++;
}
return (count);
}
