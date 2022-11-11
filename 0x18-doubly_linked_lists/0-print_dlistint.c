#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer input
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (!(h->n))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
