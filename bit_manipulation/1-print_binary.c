#include "main.h"

/**
 * print_binary - Imprime la représentation binaire d'un nombre
 * @n: Le nombre à imprimer en binaire
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    _putchar((n & 1) + '0');
}