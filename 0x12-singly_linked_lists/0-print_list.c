#include "lists.h"

/**
 * _len- len
 * @s: ...
 * Return: ....
 */


int _len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * print_list - prints all the elements of a list_t
 *@h: pointer to first node
 *Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
