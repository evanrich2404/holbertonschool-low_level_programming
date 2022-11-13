#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer yo
 * @index: index of node starting from 0
 * Return: NULL when no target match, else target node add
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeNum;

	for (nodeNum = 0; nodeNum < index; nodeNum++)
	{
		if (!(head))
		{
			return (NULL);
		}
		head = head->next;
		head->prev = head;
	}
	return (head);
}
