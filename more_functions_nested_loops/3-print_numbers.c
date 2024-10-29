#include "main.h"
#include <stdio.h>
/**
 * putchar - 3-print_numbers.c
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
