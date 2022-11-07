#ifndef LISTS_H
#define LISTS_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct pls - singularly linked list struct
 * @len: number of chars
 * @str: pointer to char str/arr
 * @next: pointer to next pls struct
 *
 * Description: sll node struct
 */
typedef struct pls
{
	char *str;
	unsigned int len;
	struct pls *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
