#include <stdio.h>
/**
 * main - 5-print_numbers.c
 *
 * Return: always returns
 */
int main(void)
{
	int num;
	/*Loop through single digit numbers from 0 to 9*/
	for (num = 0; num <= 9; num++)
	{
	putchar(num + '0'); /*Convert the number to its character representation*/
	}

	putchar('\n'); /*Print a new line at the end*/

	return (0); /*Indicate successful execution*/
}
