#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a quote by
 * Dora Korpar
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and the piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return (1);
}