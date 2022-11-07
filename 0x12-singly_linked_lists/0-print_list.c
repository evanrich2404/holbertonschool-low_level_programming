#include "lists.h"
/**
 * print_list - prints list of nodes
 * Return: the number of nodes, if str is NULL print [0] (nil)
 * @h: pointer input variable
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
