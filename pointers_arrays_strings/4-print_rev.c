#include "main.h"
/**
 * print_rev - print reversed
 * @s: string to rev
 */

void print_rev(char *s)
{
int len = 0;
int i;

for (s[len] != '\0')
{
len++;
}

for (i = len -1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
int main(void)
{
char *str;


print_rev(str);
return (0);
}