#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer we ned to set
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}