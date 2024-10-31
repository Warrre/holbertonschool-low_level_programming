#include "main.h"

/**
 * main - 7-print_diagonal.c
 * Description: This function prints a straight line using the '_' character.
 * The length of the line is determined by the input parameter 'n'.
 * @n: The number of times the character '/' should be printed
 * f n is 0 or less, only a newline character is printed.
 * Return: void
 */
void print_diagonal(int n)
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
	_putchar('/');
	}
	_putchar('\n');
	}
}
