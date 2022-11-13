#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of dlistint_t
 * @head: HEAD variable that does stuff
 * @index: important index of node to be deleted
 * Return: 1 if succ -1 if not succ
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *motorcycle = *head;

	if (!(*head))
	{
		return (-1);
	}
	while (index)
	{
		if (!(motorcycle))
		{
			return (-1);
		}
		motorcycle = motorcycle->next;
		index--;
	}
	if (!(motorcycle) && !(index))
		return (-1);
	if (*head == motorcycle)
	{
		*head = motorcycle->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		motorcycle->prev->next = motorcycle->next;
		if (motorcycle->next)
		{
			motorcycle->next->prev = motorcycle->prev;
		}
	}
	free(motorcycle);
	return (1);
}
