#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 * except 2 and 4
 * Return: number from 0 to 9
 */
void print_most_numbers(void)
{
	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' && i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}