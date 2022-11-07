#include "lists.h"
/**
 * add_node - adds new node to pls
 * @head: pointer to HEAD of pls
 * @str: new charArr to be added to pls
 * Return: NULL if bad juujuu else add of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
