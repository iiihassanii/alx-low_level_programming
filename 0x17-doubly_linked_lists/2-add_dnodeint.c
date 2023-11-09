#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly created node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *h = *head;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;

	if (h == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (h)
	{
		if (h->next == NULL)
		{
			newNode->prev = h;
			h->next = newNode;
			return (newNode);
		}
		h = h->next;
	}
	return (NULL);
}
