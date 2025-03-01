#include "main.h"

void print_rev(char *s)
{
int length = 0;

for (length = 0; s[length] != '\0'; length++);

for (length--; length >= 0; length--)
{
_putchar(s[length]);
}

_putchar('\n');
}
