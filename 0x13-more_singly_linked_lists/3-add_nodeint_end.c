#include "lists.h"
/**
 * add_nodeint_end - adds new node to the end of listint_s
 * @head: pointer to head of listint_s
 * @n: new int to be added to listint_s
 * Return: NULL if failure, or address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
	{
		lastNode = *head;
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
