#include "main.h"
#include <unistd.h
/**
 * _putchar - write the character c to stdout
 *  return: On succes 1.
 * On error -1 is returned,
 */

 int _putchar(char c)
 {
    return (write(1, &c, 1));
 }