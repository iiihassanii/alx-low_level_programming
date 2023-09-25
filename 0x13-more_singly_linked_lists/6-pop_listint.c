#include "lists.h"

/**
 * pop_listint - pop
 * @head: pointer
 *Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int r_value;

	if (!head)
		return (0);

	pop = *head;
	r_value = pop->n;
	*head = pop->next;
	free(pop);
	return (r_value);
}
