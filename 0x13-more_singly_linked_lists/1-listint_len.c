#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h: name of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
