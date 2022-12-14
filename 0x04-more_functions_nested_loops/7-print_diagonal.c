#include "main.h"

/**
 * print_diagonal - prints a diagonal line on a terminal
 * @n: number of times a character should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
