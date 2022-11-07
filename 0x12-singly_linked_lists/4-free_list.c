#include "lists.h"
/**
 * free_list - function that frees the pls
 * @head: pls that is going free bird
 * Return: void y'know
 */
void free_list(list_t *head)
{
	list_t *freeBird;

	while (head)
	{
		freeBird = head->next;
		free(head->str);
		free(head);
		head = freeBird;
	}
}
