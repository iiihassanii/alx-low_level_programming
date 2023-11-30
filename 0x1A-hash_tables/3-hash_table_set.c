#include "hash_tables.h"
/**
 * create_node - Creates a new hash node.
 * @key: The key for the node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created hash node,
 *         or NULL if an error occurred.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (NULL);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}
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
	unsigned long int index;
	hash_node_t *node, *check_node, *collision;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*Insetr key for the first time*/
	if (ht->array[index] == NULL)
	{
		node = create_node(key, value);
		if (node == NULL)
		{
			free(value);
			return (0);
		}
		ht->array[index] = node;
		/*printf("Insert at--->\t%s value[%s]\n", key, node->value);*/
		return (1);
	}
	/*Update node*/
	check_node = ht->array[index];
	while (check_node != NULL)
	{
		if (strcmp(check_node->key, key) == 0)
		{
			free(check_node->value), check_node->value = NULL;
			check_node->value = strdup(value);
			/*printf("Update--->\t%s\n", key);*/
			return (1);
		}
		collision = check_node; /**/
		check_node = check_node->next;
	}
	/*Handling Collisions*/
	node = create_node(key, value);
	if (node == NULL)
	{
		free(value);
		return (0);
	}
	collision->next = node;
	/*printf("Handling Collisions %s--->\t%s\n", collision->key, key);*/

	return (1);
}
