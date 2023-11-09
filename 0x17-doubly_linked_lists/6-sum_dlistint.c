#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data values in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data values in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;
	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
