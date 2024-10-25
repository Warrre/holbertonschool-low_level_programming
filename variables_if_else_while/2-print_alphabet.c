#include <stdio.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');  //Print new line at the end
	return (0);
}
