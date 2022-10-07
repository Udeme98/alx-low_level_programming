#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: number of bytes
 * Return: NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x, i;
	char *a, *b;

	if ((nmemb || size) == 0)
		return (NULL);
	x = nmemb * size;
	a = b = malloc(x);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		*a++ = 0;
	return (b);
}
