#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/*frees each node in list*/
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
