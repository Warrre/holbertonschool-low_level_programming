#include <stdio.h>
/**
 * main - 8-print_base16.c
 *
 * Return: Always return 0
 */
int main(void)
{
	int num;
	/*Loop to print '0' through '9'*/
	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}

	/*Loop to print 'a' through 'f'*/
	for (num = 'a'; num <= 'f'; num++)
	{
	putchar(num);
	}
	putchar('\n'); /*New line after printing all characters*/
	return (0); /*Indicate successful execution*/
}
