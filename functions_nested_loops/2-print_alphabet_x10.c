#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet
 * from 'a' to 'z' ten times, each time followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
		_putchar('\n');
	}
}