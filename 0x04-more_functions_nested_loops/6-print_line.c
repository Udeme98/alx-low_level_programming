#include "main.h"

/**
 * print_line - prints _ n times
 * @n: number of times to print _
 * Retun: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != n)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}
