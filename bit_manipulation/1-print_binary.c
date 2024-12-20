#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);  // Shift right to process the next bit

    _putchar((n & 1) + '0');  // Print the least significant bit
}