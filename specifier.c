#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * specifier-a character pointer pointing to the functions
 * @format:the strings goes here
 * Return:o if successfull
 */
int (*specifier(const char *format))(va_list any)
{
	int i;
	int j;

	printed items[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", percent_sign},
		{"d", print_decimal},
		{NULL, NULL}
	};

	i = 0;
	while (format[i] != '\0' && format[i])
	{
		j = 0;
		while (items[j].f != NULL)
		{
			if (format[i] == *(items[j].ch))
			{
				return (items[j].f);
			}
			j++;
		}
		i++;
	}
	return (0);
}

