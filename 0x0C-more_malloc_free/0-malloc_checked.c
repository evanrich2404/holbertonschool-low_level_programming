#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * Return: a pointer to the allocated memory
 * @b: input variable
 * Desc: if malloc fails, the function should cause normal process termination
 *	 with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	
	return (mem);
}
