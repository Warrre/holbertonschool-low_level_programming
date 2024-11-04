#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Description: Numbers are separated by comma and space.
 * Numbers are displayed in the same order they are stored in the array.
 * printf is allowed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
