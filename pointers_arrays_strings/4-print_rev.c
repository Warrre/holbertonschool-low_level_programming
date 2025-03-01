#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed
 */
void print_rev(char *s)
{
int length = 0;

// Find the length of the string
for (length = 0; s[length] != '\0'; length++)
;

// Print the string in reverse order using a for loop
for (length--; length >= 0; length--)
{
_putchar(s[length]);
}

 _putchar('\n');
}
