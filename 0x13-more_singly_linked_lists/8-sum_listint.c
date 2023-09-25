#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node ptr
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		if (!head->n)
			sum += 0;
		else
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
