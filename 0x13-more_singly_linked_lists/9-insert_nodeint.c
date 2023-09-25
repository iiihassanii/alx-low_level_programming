#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a new node
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	/* check head */
	if (head == NULL)
		return (NULL);
	/*serch for idx -1 */
	if (idx > 0)
	{
		tmp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			tmp = tmp->next;
			if (!tmp)
				return (NULL);
		}
	}

	/* create the node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	/* case idx 0 */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
