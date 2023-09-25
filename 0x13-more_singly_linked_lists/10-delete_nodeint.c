#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: head pointer
 * @index: index of node we wanna delete
 * Return: pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		delete = tmp;
		tmp = tmp->next;
		*head = tmp;
		free(delete);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	delete = tmp->next;
	tmp->next = tmp->next->next;
	free(delete);
	return (1);
}
