#include "lists.h"

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
