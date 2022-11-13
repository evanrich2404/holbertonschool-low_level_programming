#include "lists.h"
/**
 * print_dlistint_backward - prints all the elements of dlistint_t backwards
 * @h: head pointer yorp
 * Return: total number of nodes in dlistint_t
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodeNum = 0, totalNode;

	if (!(h))
	{
		return (nodeNum);
	}
	while (h->next)
	{
		h = h->next;
		nodeNum++;
	}
	totalNode = nodeNum;
	for (; nodeNum > 0; nodeNum--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	totalNode++;
	return (totalNode);
}
