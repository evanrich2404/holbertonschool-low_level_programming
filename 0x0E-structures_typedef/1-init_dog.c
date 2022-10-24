#include "dog.h"
/**
 * init_dog - initializing a variable type struct dog
 * @d: input variable
 * @name: char input
 * @age: float input
 * @owner: 2nd char input
 * Return: Maybe?
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
