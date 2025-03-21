#ifndef VAR_H
#define VAR_H
#include <stdarg.h>
/**
 * struct format - format for miniprintf
 * @fo: format character (c, i, f, s)
 * @f: function to use
 */
typedef struct format
{
	char *fo;
	void (*f)(char *separator, va_list ap);
} form;

int sum_them_all(const unsigned int n, ...);

#endif