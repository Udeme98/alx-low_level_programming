#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees new_dog
 * @d: pointer to new dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
