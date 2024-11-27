#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}
void print_name_uppercase(char *name)
{
	unsigned int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] >= 97 && name[i] <= 122)
		{
			name[i] = name[i] - 32;
		}
	}
	printf("Hello, my uppercase name is %s\n", name);
}
int main(void)
{
	print_name("Danton", print_name_as_is);
	print_name("Rick Harris", print_name_uppercase);
	return (0);
}