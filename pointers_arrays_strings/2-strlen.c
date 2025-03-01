#include "main.h"
#include <stdio.h>
/**
 * _strlen - find the length of a string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
int leng = 0;

for (; *s != '\0'; s++)
{
leng++;
}
return (leng);
}