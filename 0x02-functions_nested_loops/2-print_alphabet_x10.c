#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase
 * alphabet followed by new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
