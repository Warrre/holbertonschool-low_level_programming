#include <stdio.h>
/**
 * main - 6-print_numberz.c
 *
 * Return: returns Always 0
 */
int main(void)
{
	int num;

	/*Loop through single-digit numbers from 0 to 9*/
	for (num = 0; num <= 9; num++)
	{
	putchar(num + '0'); /*Convert integer to its ASCII character*/
	}

	putchar('\n'); /*Print newline at the end*/

	return (0); /*Indicate successful execution*/
}
