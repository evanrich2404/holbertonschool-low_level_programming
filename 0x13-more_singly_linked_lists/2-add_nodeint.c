#include "lists.h"
/**
 * add_nodeint - adds a new node to listint_s
 * @head: pointer to HEAD of listint_s
 * @n: new int to be added to listint_s
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
