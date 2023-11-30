#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table
 * @ht: The hash table to add or update the element
 * @key: The key of the element
 * @value: The value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *prev, *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (ht->stail == NULL)
			ht->stail = new_node;
		return (1);
	}

	prev = ht->shead;
	node = prev->snext;

	while (node != NULL && strcmp(key, node->key) > 0)
	{
		prev = node;
		node = node->snext;
	}

	new_node->sprev = prev;
	new_node->snext = node;
	prev->snext = new_node;

	if (node != NULL)
		node->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->shead;
	while (node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The hash table to print in reverse order
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->stail;
	while (node != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
