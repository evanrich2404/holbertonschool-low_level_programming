#include "lists.h"
/**
 * list_len - finds how many nodes
 * @h: h pls
 * Return: nodes in h
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
