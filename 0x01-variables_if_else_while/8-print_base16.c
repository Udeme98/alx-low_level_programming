#include <stdio.h>

/**
 * main - prints
 * numbers in base 16
 * Return: 0 always (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
