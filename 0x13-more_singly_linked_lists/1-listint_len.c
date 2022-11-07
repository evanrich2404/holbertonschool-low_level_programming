#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: input variable
 * Return: return number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
