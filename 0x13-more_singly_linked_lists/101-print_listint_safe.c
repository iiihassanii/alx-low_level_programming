#include "lists.h"

/**
 * print_listint_safe - prints linked list safe
 * @head: head pointer
 * Return: the loop
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *corrent = NULL;
	const listint_t *check = NULL;
	size_t counter = 0;
	size_t counter_check;

	/*check head*/
	if (!head)
		return (NULL);

	corrent = head;
	while (corrent)
	{
		printf("[%p] %d\n", &corrent, corrent->n);
		counter++;
		corrent = corrent->next;
		check = head;
		counter_check = 0;
		while (counter_check < counter)
		{
			if (check == corrent)
			{
				printf("-> [%p] %d\n", &corrent, corrent->n);
				return (counter);
			}
			check = check->next;
			counter_check++;
		}
	}
	return (counter);
}
