#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct valid_types - struct prints data types
 *
 * @type: data type
 * @p: pointer to function
 *
 */

typedef struct valid_types
{
	char type;
	void (*p)(va_list);
} v_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
