#include <stdio.h>
/**
 * main - 2-print_alphabet.c
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');  /*Print new line at the end*/
	return (0);
}
