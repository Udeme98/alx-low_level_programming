#include <stdio.h>

/**
 * main - prints combination
 * of two numbers
 * Return: 0 always (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
