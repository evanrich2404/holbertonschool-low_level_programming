#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head duh
 * Return: elements amount duh
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
