#include <unistd.h>

/**
 * main - 0-putchar.c
 *
 * Return: Always returns 0
 */
int main(void)
{
	write(1, "_putchar\n", 9); /* Écrit "_putchar" suivi d'une nouvelle ligne */
	return (0);
}
