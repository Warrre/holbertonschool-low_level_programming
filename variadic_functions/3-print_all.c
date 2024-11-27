#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j = 0;
    char *separator = "";
    char *str;
    table t[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };

    va_start(args, format);
    
    while(format[i] != '\0')
    {
        while(t[j].type != NULL)
        {
            if(format[i] == t[j].type[0])
            {
                printf("%s", separator);
                t[j].f(args);
                separator = ", ";
            }
            if(format[i + 1] == '\0')
                
            {
                printf("\n");
                va_end(args);
                return;
            }
            
        }j++;
        i++;
    }
    void print_char(va_list args)
    {
        printf("%c", va_arg(args, int));
    }
       void print_int(va_list args)
    
    {
        printf("%d", va_arg(args, int));
    }
    void print_float(va_list args)
    {
        printf("%f", va_arg(args, double));
    }
    void print_string(va_list args)
    {
        str = va_arg(args, char *);
        if(str == NULL)
        {
            str = "(nil)";
        }
        printf("%s", str);
    }
}