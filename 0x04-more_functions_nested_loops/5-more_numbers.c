#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	k = 0;

	while (k != 10)
	{
		for (i = 0, j = 48; i <= 14; i++, j++)
		{
			if (i > 9)
			{
				_putchar(49);
			}
			if (j > 57)
			{
				j = 48;
			}
			_putchar(j);
		}
		k++;
		_putchar(10);
	}
}
