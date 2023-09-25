#include "lists.h"

/**
 * add_nodeint - add
 * @head: ...
 * @n: int
 * Return: ....
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!head || !add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
