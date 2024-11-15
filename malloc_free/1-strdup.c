#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2);
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
	return (NULL);

	for (len = 0; str[len]; len++)
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	return (NULL);
	for (i = 0; i <= len; i++)
	dup[i] = str[i];
	return (dup);
}
