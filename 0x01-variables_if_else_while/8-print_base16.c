#include <stdio.h>

/**
 * main - prints
 * numbers in base 16
 * Return: 0 always (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch)
	}
	putchar('\n');
	return (0);
}
