#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a
 * specified index in a doubly linked list.
 * @head: Pointer to pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if the node was successfully deleted, or -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	while (index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}

	if (node->next)
		node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	free(node);
	return (1);
}
