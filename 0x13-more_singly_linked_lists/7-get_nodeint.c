#include "lists.h"
/**
 * get_nodeint_at_index - cycles through listint_s for index
 * @head: pointer to HEAD
 * @index: target node number
 * Return: NULL when no target match, else target node add
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeNum;

	for (nodeNum = 0; nodeNum < index; nodeNum++)
	{
		if (!(head))
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
