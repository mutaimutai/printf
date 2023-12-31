#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define UNUSED(X) void (x)
#define BUFF_SIZE 1024
/**
 * _printf-the variadic function
 * @format:the format string
 * @...:other variables go here
 * Return:number of characters printed
 */
int _printf(const char *format, ...);
/**
 * print_char-prints a character
 * Return:0 if successful
 * @any:the arguments from va_list
 */
int print_char(va_list any);
/**
 * print_str-prints a string
 * @any:the string to be read from the va_list
 * Return:0 if successful
 */
int print_str(va_list any);
/**
 * percent_sign-prints a %
 * @any:arguments in the va_list
 * Return:o if suceessfull
 */
int percent_sign();
/**
 * struct op-structure to hold the specifiers
 * @ch:the strings to be formatted
 * @f:function pointer pointing to the functions created
 */
int print_decimal(va_list any);
int print_integer(va_list any);
typedef struct op
{
	char *ch;
	int (*f)(va_list any);
} printed;
#endif
