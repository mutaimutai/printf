#ifndef PROTOTYPES_H
#define PROROTYPES_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list any);
int print_str(va_list any);
struct op{
	char *c;
	int (*f)(va_list any);
};
#endif
