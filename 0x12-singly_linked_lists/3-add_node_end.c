#include "lists.h"

/**
 * add_node_end - add
 * @head: ...
 * @str: .....
 * Return: ....
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_n)
		return (NULL);

	if (str)
	{
		new_n->str = strdup(str);
		if (!new_n->str)
			return (NULL);
		new_n->len = _len(new_n->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node = new_n->next;
	}
	else
		*head = new_n;
	return (new_n);
}
