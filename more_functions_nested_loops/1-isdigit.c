#include "main.h"
/*
 * _isupper - 1-isdigit.c
 *
 * Return: 1 if c is uppercase, 0 etheraise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
