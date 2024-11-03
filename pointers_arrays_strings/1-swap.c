#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b);

int main(void)
{
	int a = 98;
	int b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
