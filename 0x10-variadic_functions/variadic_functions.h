#ifndef VAR_H
#define VAR_H
#include <stdarg.h>
void _putchar(char);
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
