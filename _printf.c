#include <stdio.h>
#include <stdarg.h>
#include "prototypes.h"
/**
 * _printf-prints anything
 * @format:format specifiers
 * print_char-prints a character
 */

int print_char(va_list any)
{
	printf("%c", va_arg(any, int));
}
/**
 * print_str-prints a string
 * @any:the list to be input
 */
int print_str(va_list any)
{
	char *str;
	str = va_arg(any, char*);
	if (str == NULL)
	{
		putchar(*str);
	}
}
int _printf(const char *format, ...)
{
	int i, j;
	va_list Args;

	va_start(Args, format);
	op specifier[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};
	i = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (specifier[j] != NULL)
			{
				if (format[i] == *(specifier[j].c))
				{
					specifier[j].f(va_list args);
				}
				j++;
			}
			if (specifier[j].f == '\0')
			{
				putchar('%');
				putchar(format[i]);
			}
		}
		else
		{
			putchar(format[i]);
		}
	}
	va_end(Args);
	return (0);
}
