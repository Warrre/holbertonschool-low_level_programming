#include <stdio.h>
/**
 * main - 9-print_comb.c
 *
 * Return: Always returns 0
 */
int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)

	{
	putchar('0' + num); /*Print the current number*/
	/*Check if the current number is not the last one*/
	if (num < 9)
	{
	putchar(',');    /*Print the comma*/
	putchar(' ');    /*Print the space after the comma*/
	}
	}
	putchar('\n'); /*New line at the end*/
	return (0); /*Indicate successful execution*/
}
