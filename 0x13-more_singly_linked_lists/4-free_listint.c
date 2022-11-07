#include "lists.h"
/**
 * free_listint - frees the listint_t
 * @head: listint_t that is going free bird
 * Return: void bruh
 */
void free_listint(listint_t *head)
{
	listint_t *freeBird;

	while (head)
	{
		freeBird = head->next;
		free(head);
		head = freeBird;
	}
}
