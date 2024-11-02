#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: Size of the triangle
 *
 * Description: This function prints a triangle using '#' characters.
 * The size parameter determines the height and width of the triangle.
 * If size is 0 or less, only a new line is printed.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
