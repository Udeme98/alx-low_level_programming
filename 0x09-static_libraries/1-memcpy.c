#include "main.h"

/**
 * _memcpy - Function that copies n bytes from one memory to another
 * @dest: destination memory
 * @src: source memory
 * @n: size of memory to be copied
 * Return: pointer to the memory of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
