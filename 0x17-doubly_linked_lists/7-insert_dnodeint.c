#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a specified index in a doubly linked list.
 * @h: Pointer to pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert, *head = *h;

	if (!head && idx != 0)
		return (NULL);

	insert = malloc(sizeof(dlistint_t));
	if (!insert)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = head;
		insert->prev = NULL;
		if (head)
			head->prev = insert;
		*h = insert;
	}
	else
	{
		while (idx--)
		{
			if (head->next == NULL && idx == 0)
			{
				return (add_dnodeint_end(&head, n));
			}
			if (head->next == NULL && idx != 0)
				return (NULL);
			head = head->next;
		}
		insert->next = head;
		insert->prev = head->prev;
		head->prev->next = insert;
		head->prev = insert;
	}

	return (insert);
}
