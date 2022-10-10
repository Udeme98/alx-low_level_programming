#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the struct dog variable
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * @d: points to initialize
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name;
	d->age;
	d->owner;
}
