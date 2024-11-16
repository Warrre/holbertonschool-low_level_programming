#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc
 * @b: Le nombre d'octets à allouer
 *
 * Return: Un pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
