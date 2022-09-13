#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return: 0 if c is alphabet, otherwise 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
