#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy the string in new pointer
 * @str: string to copy
 * Return: pointer to duplicated or NULL
 */
char *_strdup(char *str)
{
char *st;
unsigned int i = 0;
unsigned int length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
{
length++;
}

st = malloc((length + 1) * sizeof(char));
if (st == NULL)
return (NULL);
for (; i < length; i++)
{
st[i] = str[i];
}
st[length] = '\0';
return (st);
}
