#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct print - Struct print
 * @type: The type of argument
 * @f: The function associated
 */

typedef struct print
{
char *type;
void (*f)(va_list);
} print_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

#endif
