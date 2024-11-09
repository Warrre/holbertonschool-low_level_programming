#include "main.h"

/**
 * _sqrt_helper - Helper function to calculate square root recursively
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the natural square root of n, or -1 if it doesn't have one
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}
