#include <stdio.h>
/**
 * main - 7-print_tebahpla.c
 *
 * Return: Always returns 0
 */
int main(void)
{
	char ch;
	/*Loop through letters from 'z' to 'a'*/
	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}

	putchar('\n'); /*Print newline at the end*/

	return (0); /*Indicate successful execution*/
}
