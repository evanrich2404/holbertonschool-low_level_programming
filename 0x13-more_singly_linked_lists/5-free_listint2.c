#include "lists.h"
/**
 * free_listint2 - frees listint_t and sets head to NULL
 * @head: input variable
 * Return: void lol
 */
void free_listint2(listint_t **head)
{
	listint_t *freeBird;

	if (!(head))
	{
		return;
	}
	while (*head)
	{
		freeBird = (*head)->next;
		free(*head);
		*head = freeBird;
	}
	head = NULL;
}
