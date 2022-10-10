#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * new_dog - creates a new structure
 * @age: age of new_dog
 * @name: name of new_dog
 * @owner: owner of new_dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *ptr = &new_dog;

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
