#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new intnode into listint_s at index
 * @head: HEAD pointer
 * @idx: index
 * @n: int input
 * Return: add of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *oldlistint_s;
	unsigned int nodeNum;

	oldlistint_s = *head;
	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	if (!(idx))
	{
		newNode->next = oldlistint_s;
		*head = newNode;
		return (newNode);
	}
	for (nodeNum = 0; nodeNum < (idx - 1); nodeNum++)
	{
		if (!(oldlistint_s) || !(oldlistint_s->next))
		{
			return (NULL);
		}
		oldlistint_s = oldlistint_s->next;
	}
	newNode->next = oldlistint_s->next;
	oldlistint_s->next = newNode;
	return (newNode);
}
