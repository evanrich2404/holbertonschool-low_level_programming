#include "lists.h"
/**
 * free_dlistint - frees dlistint_t
 * @head: head pointer yo
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeBird;

	while (head)
	{
		freeBird = head->next;
		head->prev = freeBird;
		free(head);
		head = freeBird;
	}
}
