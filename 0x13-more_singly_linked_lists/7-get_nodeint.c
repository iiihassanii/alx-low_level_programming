#include "lists.h"

/**
 * get_nodeint_at_index  -nth node of a linked list.
 * @head: pointer of the first node
 * @index: index of the node
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
