#include "main.h"

/**
 * print_square - Prints a square using the character #
 * @size: The size of the square
 *
 * Description: This function prints a square of a given size using the '#'
 * character. If the size is 0 or less, it prints only a new line.
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
}
