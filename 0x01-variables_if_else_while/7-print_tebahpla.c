#include <stdio.h>

/**
 * main - prints lowercase
 * letters in reverse order with putchar
 * Return: 0 always (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
