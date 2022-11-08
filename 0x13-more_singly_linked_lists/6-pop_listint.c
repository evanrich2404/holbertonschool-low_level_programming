#include "lists.h"
/**
 * pop_listint - removes head of listint_s and returns its' n
 * @head: head of listint_s pointer
 * Return: HEAD's n or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *target;
	int node1nval;

	if (!(*head))
	{
		return (0);
	}
	target = *head;
	node1nval = (*head)->n;
	*head = (*head)->next;
	free(target);
	return (node1nval);
}
