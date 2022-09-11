#include <stdio.h>

/**
 * main - prints the
 * combination of three numbers
 * Return: 0 always (success)
 */
int main(void)
{
	int i, j, k;

		for (i = 48; i < 58; i++)
		{
			for (j = 49; i < 58; j++)
			{
				for (k = 50; k < 58; k++)
				{
					if (i > j && j > k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i != 55 || j != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
