#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function iterates through the string and prints
 * each character using _putchar, then prints a newline character.
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
 _putchar(str[i]);
}
 _putchar('\n');
}
