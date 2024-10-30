#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers from 0 to 14,
 * repeated 10 times. Each set of numbers is followed by a new line.
 * The function uses _putchar only three times.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, num;

		for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
	{
		num = j;
		if (j > 9)
	{
		_putchar('1');
		num = j % 10;
	}
		_putchar(num + '0');
	}
		_putchar('\n');
	}
}
