#include "main.h"
#include <unistd.h>
/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}
	putchar('\n');
}
