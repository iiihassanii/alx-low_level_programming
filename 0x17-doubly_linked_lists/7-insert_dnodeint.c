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

	if (!head)
		return (NULL);

	insert = malloc(sizeof(dlistint_t));
	insert->n = n;
	while (idx--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	insert->next = head->next;
	insert->prev = head;
	head->next = insert;
	insert->next->prev = insert;
	return (insert);
}
