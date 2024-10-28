#include "main.h"
/*
 * _isupper - 1-isdigit.c
 *@c: The character to be checked
 * Return: 1 if c is uppercase, 0 etheraise
 */
int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
