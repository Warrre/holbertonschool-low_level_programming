#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

typedef struct table
{
    char *type;
    void (*f)(va_list);
} table;
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
