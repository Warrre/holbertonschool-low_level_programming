#include "main.h"
/**
 * main - 2-print_alphabet_x10.c
 *
 * Return: Always returns 0
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{/*Loop 10 times*/
	for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter); /*Print each letter*/
	}
	_putchar('\n'); /*Print a new line after each alphabet*/
	}
}
