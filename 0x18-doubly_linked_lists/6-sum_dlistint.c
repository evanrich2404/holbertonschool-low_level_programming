#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sumDn = 0;

	/*adds node data to sum, then targets next node*/
	while (head)
	{
		sumDn += head->n;
		head = head->next;
	}
	/* see the loop break when head->next is NULL */
	return (sumDn);
}
