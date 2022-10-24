#include "dog.h"
/**
 * free_dog - frees that dog(s)
 * @d: pointer of dog quality
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
