#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string
 * @s: string to reverse
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;

for (; *end != '\0'; end++)
;

end--;

for (; start < end; start++, end--)
{
temp = *start;
*start = *end;
*end = temp;
}
}
