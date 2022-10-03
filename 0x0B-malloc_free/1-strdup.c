#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: value to initialize the space
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *pointer;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	pointer = (char *)malloc(sizeof(char) * i + 1);

	if (!pointer)
		pointer[j] = str[j];

	pointer[j] = '\0';

	return (pointer);
}