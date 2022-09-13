#include "main.h"

/**
 * print_alphabet - prints the
 * lowercase alphabet
 * Return: returns nothing/void
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
