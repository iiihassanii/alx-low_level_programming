#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
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
	list_t *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	if (str)
	{
		add_node->str = strdup(str);
		add_node->len = _strlen(str);
	}
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
