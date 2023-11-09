#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly created node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	/*first - ceate the node*/
	/* malloc and check */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/*now add the node to the list*/
	/*check if there is head*/
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
