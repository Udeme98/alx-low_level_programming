#include "main.h"

/**
 * _strncat - concatenates to strings
 * @dest: The string to be apended upon
 * @src: The string to b appended to dest
 * @n: Numbers of bytes to use from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
