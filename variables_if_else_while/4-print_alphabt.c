#include <stdio.h>
/**
 * main - 4-print_alphabt.c Entry point of the program
 * Description: This function prints the alphabet in lowercase
 * excluding the letters 'q' and 'e', followed
 * by a new line.
 * return: Always returne 0
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
