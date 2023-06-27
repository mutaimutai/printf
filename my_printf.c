#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int (*specifier(const char *format))(va_list any);

int _printf(const char *format, ...)
{
	int i;
	ssize_t total_char = 0;
	ssize_t printed_char = 0;
	int (*f_ptr)(va_list);
	va_list strings;

	va_start(strings, format);
	if (format == NULL)
	{
		return (-1);
	}
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			printed_char = write(1, &format[i], 1);
			total_char = total_char + printed_char;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f_ptr = specifier(&format[i + 1]);
			if (f_ptr != NULL)
			{
				printed_char = f_ptr(strings);
				total_char = total_char + printed_char;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			if (format[i + 1] != '\0')
			{
				printed_char = write(1, &format, 1);
				total_char = total_char + printed_char;
				i += 2;
				continue;
			}
		}
		i++;
	}
	return (total_char);
}
