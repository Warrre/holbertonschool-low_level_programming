#include "main.h"
#include <stdio.h>
/**
 * putchar - 3-print_numbers.c
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
}
