#include "lists.h"
/**
 * sum_listint - sum of listint_s node's n(s)
 * @head: HEAD pointer
 * Return: sum of all n
 */
int sum_listint(listint_t *head)
{
	int nSum = 0;

	while (head)
	{
		nSum += head->n;
		head = head->next;
	}
	return (nSum);
}
