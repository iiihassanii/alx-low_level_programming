#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the head of the list
 * Return: NULL if error
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	next = *head;
	while (*head)
	{
		next = next->next;
		free(*head);
		*head = next;
	}
}
