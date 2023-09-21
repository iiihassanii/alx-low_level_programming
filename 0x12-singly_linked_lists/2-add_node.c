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
 * add_node- add
 * @head: ...
 * @str: .....
 * Return: ....
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new_h = malloc(sizeof(list_t));

	if (!head || !new_h)
		return (NULL);

	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
			return (NULL);
		new_h->len = _len(new_h->str);
	}
	new_h->next = *head;
	*head = new_h;
	return (new_h);
}
