#include <stdio.h>
/**
 * main - 4-print_alphabt.c
 * This function prints the lowercase alphabet excluding
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
	putchar('\n');/* Print newline once, after the loop */
	return (0); /* Indicates successful completion */
}
