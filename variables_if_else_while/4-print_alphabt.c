#include <stdio.h>

/**
 * main - 4-print_alphabt.c
 *
 * Description: This function prints lowercase alphabet excluding 'q' and 'e',
 * followed
 *
 * Return: Always returns 0
 */
int main(void)
{
	char ch;

	/* Imprime l'alphabet en minuscules sauf 'q' et 'e' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	}
	putchar('\n'); /* Imprime une nouvelle ligne après la boucle */

	return (0); /* Indicates successful completion */
}
