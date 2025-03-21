#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct function
{
	char identifier;
	void (*fptr)(va_list *arguments);
} function_t;

void print_char(va_list *arguments);
void print_int(va_list *arguments);
void print_float(va_list *arguments);
void print_string(va_list *arguments);

#endif
