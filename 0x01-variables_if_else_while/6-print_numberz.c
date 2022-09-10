#include <stdio.h>

/**
 * main - prints
 * numbers using putchar
 * Return: 0 always (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
