#include "lists.h"
/**
 * add_node_end - adds new node to end of pls
 * @head: pointer to HEAD of pls
 * @str: new charArr to be added to pls
 * Return: NULL if bad juujuu else add of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	unsigned int strLen;
	char *charArr;

	newNode = malloc(sizeof(list_t));
	if (!(newNode))
	{
		return (NULL);
	}
	strLen = strlen(str);
	charArr = malloc(strlen(str));
	if (!(charArr))
	{
		free(newNode);
		return (NULL);
	}
	strcpy(charArr, str);
	newNode->str = charArr;
	newNode->len = strLen;
	newNode->next = NULL;
	if (*head)
	{
		lastNode = *head;
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
