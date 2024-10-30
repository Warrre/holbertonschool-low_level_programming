#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * Description: This function prints the digits from 0 to 9 to the
 * standard output, but it skips the numbers 2 and 4. It uses _putchar
 * to print each digit and adds a newline at the end.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

		for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
	{
		putchar(num);
	}
	}
		putchar('\n');
}
