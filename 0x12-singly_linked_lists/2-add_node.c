#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the str
 */
int _strln(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strln(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return(new);
}


