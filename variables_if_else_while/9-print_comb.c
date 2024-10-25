#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 with commas and spaces
 *
 * Description: This function prints all single digit numbers
 * from 0 to 9 separated by commas and spaces, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar('0' + num);

	if (num < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
