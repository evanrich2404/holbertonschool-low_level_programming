#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;

	/* if list is empty, return 0 */
	if (!h)
		return (0);

	/* traverse to the end of the list */
	while (h->next)
		h = h->next;

	/* print the list in reverse */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
		count++;
	}
	return (count);
}
