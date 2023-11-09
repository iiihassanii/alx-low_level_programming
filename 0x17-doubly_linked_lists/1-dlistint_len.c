#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 *This function counts the number of elements in a doubly linked list.
 * The `h` parameter is a pointer to the head of the doubly linked list.
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
