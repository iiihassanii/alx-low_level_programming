#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @n: int
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	/*first - ceate the node*/
	/* malloc and check */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/*now add the node to the list*/
	/*check if there is head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
