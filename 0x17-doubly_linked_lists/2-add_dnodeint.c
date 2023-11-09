#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly created node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (!head || !add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
