#include "main.h"

/**
 * print_alphabet - 1-alphabet.c
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) /* Loop through lowercase letters */
	_putchar(ch);
	_putchar('\n'); /* Print a new line */
}
