#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * If n is 0 or less, only a newline character is printed.
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
