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
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
	length++;
	}

	/* Calculate the starting point */
	start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}

	_putchar('\n');
}
