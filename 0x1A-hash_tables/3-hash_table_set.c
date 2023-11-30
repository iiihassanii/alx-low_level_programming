#include "hash_tables.h"

/**
 * hash_table_set - Inserts or updates a key-value pair in a hash table.
 * @ht: The hash table to insert or update the key-value pair.
 * @key: The key for the key-value pair.
 * @value: The value associated with the key.
 *
 * Return: 1 if the operation is successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *cpy_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy_value;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(cpy_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = cpy_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
