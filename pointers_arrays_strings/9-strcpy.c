#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: String to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
