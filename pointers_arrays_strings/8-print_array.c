#include "main.h"
#include <stdio.h>
/**
 * print_array - prin n elements of an array
 * @a: array to print
 * @n: elements to print
 */
void print_array(int *a, int n)
{
int ele;

for (ele = 0; ele < n; ele++)
{
printf("%d", a[ele]);
if (ele < (n - 1))
{
printf(", ");
}
}
printf("\n");
}
