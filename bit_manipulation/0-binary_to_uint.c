#include "main.h"

/**
 * binary_to_uint - Convertit un nombre binaire en entier non signé
 * @b: Chaîne de caractères contenant le nombre binaire
 *
 * Return: Le nombre converti, ou 0 si
 *         - il y a un ou plusieurs caractères dans la chaîne qui ne sont ni 0 ni 1
 *         - b est NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        result = result * 2 + (b[i] - '0');
    }

    return (result);
}