#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *@h: pointer to first node
 *Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	int len = 0;

	while (h)
	{
		if (h->str == NULL)
			len = 0;
		else
		{
			while  (h->str[len] != '\0')
				len++;
		}
		printf("[%d] %s\n", len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
