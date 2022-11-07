#include "lists.h"
/**
 * print_listint - prints list of ints
 * @h: input variable
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
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
