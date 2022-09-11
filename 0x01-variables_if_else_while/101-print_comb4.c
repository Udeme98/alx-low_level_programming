#include <stdio.h>

/**
 * main - prints the
 * combination of three numbers
 * Return: 0 always (success)
 */
int main(void)
{
	int i, j, k;

		for (i = 48; i <= 57; i++)
		{
			for (j = i + 1; i <= 57; j++)
			{
				for (k = j + 1; k <= 57; k++)
				{
					if ((j != i) && (k != j))
					{
						putchar(i);
						putchar(j);
						putchar(k);
					}

					if ((i == 55) && (j == 56))
					{
						continue;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
