#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create = malloc(sizeof(hash_table_t));

	if (create == NULL)
		return (NULL);
	create->array = malloc(size * sizeof(hash_node_t *));
	if (create->array == NULL)
	{
		return (NULL);
	}
	create->size = size;
	return (create);
}
