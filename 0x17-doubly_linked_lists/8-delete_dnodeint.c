#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		node->next->prev = NULL;
		if ((*head)->next)
			*head = (*head)->next;
		free (node);
		return (1);
	}
	while (index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}

	if (node->next)
	{
		node->prev->next = node->prev->next->next;
		node->next->prev = node->next->prev->prev;
		free (node);
		return (1);
	}
	node->prev->next = NULL;
	return (1);
}
