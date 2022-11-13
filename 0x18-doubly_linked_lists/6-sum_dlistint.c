#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: head pointer ya
 * Return: n or sum of all data lol
 */
int sum_dlistint(dlistint_t *head)
{
	int nSum = 0;

	while (head)
	{
		nSum += head->n;
		head = head->next;
	}
	return (nSum);
}
