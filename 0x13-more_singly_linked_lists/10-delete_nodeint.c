#include "lists.h"
/**
 * delete_nodeint_at_index - remove target node at index
 * @head: pointer to HEAD
 * @index: target node index position
 * Return: 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *target, *oldlistint_s;
	unsigned int nodeNum;

	oldlistint_s = *head;
	if (!(oldlistint_s))
	{
		return (-1);
	}
	if (!(index))
	{
		*head = (*head)->next;
		free(oldlistint_s);
		return (1);
	}
	for (nodeNum = 0; nodeNum < (index - 1); nodeNum++)
	{
		if (!(oldlistint_s->next))
		{
			return (-1);
		}
		oldlistint_s = oldlistint_s->next;
	}
	target = oldlistint_s->next;
	oldlistint_s->next = target->next;
	free(target);
	return (1);
}
