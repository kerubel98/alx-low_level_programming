#include "hash_tables.h"

/**
 * hash_table_get - reteives a value associated with key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value at key
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	indx = key_index((unsigned char *)key, ht->size);

	if (ht->array[indx] == NULL || ht->array[indx] == 0)
		return (NULL);
	if (strcmp(ht->array[indx]->key, key) == 0)
	{
		return (ht->array[indx]->value);

		node = ht->array[indx];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				return (node->value);
			}
			node = node->next;
		}
	}
	return (NULL);
}
