#include <stdio.h>
/**
 * main - 4-print_alphabt.c
 *
 * return: Always 0
 */
int main(void)
{
	char ch;
	/* Print lowercase alphabet except 'q' and 'e' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('n');
	return (0);
}
