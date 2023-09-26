#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head node
 * Return: the new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = *head, *prev = NULL, *next;

	while (new)
	{
		next = new->next;
		new->next = prev;
		prev = new;
		new = next;
	}
	*head = prev;
	return (*head);
}
