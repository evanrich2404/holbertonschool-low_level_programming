#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of a dlistint_t list
 * @head: pointer to beginning of list
 * @n: new int to add
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
