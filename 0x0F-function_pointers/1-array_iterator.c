#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a functon given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: poiter to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}