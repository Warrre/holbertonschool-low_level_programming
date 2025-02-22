#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return :O always succes
 */
void print_alphabet(void)
{
	char c;

	for ( c <= 'a'; c = 'z'; c++ )
	{
	_putchar(c);
	}
	_putchar('/n');
}
