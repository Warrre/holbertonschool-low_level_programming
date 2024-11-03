#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* First, calculate the length of the string */
	while (s[length] != '\0')
	{
	length++;
	}

	/* Then, print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}

	/* Print a new line at the end */
	_putchar('\n');
}
