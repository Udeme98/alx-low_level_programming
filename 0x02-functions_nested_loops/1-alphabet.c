#include "main.h"

/**
 * main - prints the
 * lowercase alphabet
 * Return: 0 always (success)
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
