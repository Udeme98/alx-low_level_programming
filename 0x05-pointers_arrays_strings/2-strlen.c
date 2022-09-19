#include "main.h"

/**
 * _strlen - returns th length of a string
 * @s: string to find it's length
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
