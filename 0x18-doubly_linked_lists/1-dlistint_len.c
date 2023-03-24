#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	/*adds to node count, then targets next node*/
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
