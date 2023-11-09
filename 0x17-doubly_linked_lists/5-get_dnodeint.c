#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a specified index in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve.
 * Return: Pointer to the node at the specified index, or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (index--)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
