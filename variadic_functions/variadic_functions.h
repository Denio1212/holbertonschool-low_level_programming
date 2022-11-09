#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);

typedef struct stringus
{
	char *str;
	void (*print)(va_list ap);
} print_format;
#endif
