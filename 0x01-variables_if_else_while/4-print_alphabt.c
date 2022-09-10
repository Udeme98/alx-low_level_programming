#include <stdio.h>

/**
 * main - prints
 * the lowrcase alphabet except
 * 'q' an 'e'
 * Return: 0 always (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
