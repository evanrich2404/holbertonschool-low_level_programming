#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to end of dlistint_t list
 * @head: head yo
 * @n: adding yo
 * Return: address to new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	newNode->prev = lastNode;
	return (newNode);
}
