#include "main.h"
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char-prints a character
 *@any:arguments from va_list
 *Return:0 if successful
 */
int print_char(va_list any)
{
	char ch;
	ssize_t characters = 0;

	ch = va_arg(any, int);
	characters = write(1, &ch, 1);
	return (characters);
}
/**
 * print_str-prints strings
 * @any:arguments from va_list
 * Return:number of characters printed
 */
int print_str(va_list any)
{
	int i;
	char *str;
	ssize_t characters = 0;

	str = va_arg(any, char*);
	if (str == NULL)
	{
		return (-1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		characters = write(1, &str[i], 1);
		i++;
	}
	return (characters);
}
/**
 * percent_sign-prints %
 * Return:returns 1
 */
int percent_sign(void)
{
	write(1, "%", 1);
	return (1);
}
/**
 * print_decimal-prints a decimal number
 * @any:arguments from variable list
 * Return: number of printed characters
 */
int print_decimal(va_list any)
{
	int num = va_arg(any, int);
	int characters = 0;
	int i = 0, j = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		char num_str[12];
		int is_negative = num < 0;

		if (is_negative)
		{
			write(1, "-", 1);
			num = -num;
			characters++;
		}
		while (num != 0)
		{
			num_str[i++] = '0' + (num % 10);
			num /= 10;
		}
		for (j = j - 1; j >= 0; j--)
		{
			write(1, &num_str[j], 1);
			characters++;
		}

	return (characters);
	}
}
/**
 * print_integer-prints an integer
 * @any:argument variable from va_list
 * Return:number of characters printed out
 */
int print_integer(va_list any)
{
	int num = va_arg(any, int);
	int characters = 0;
	int i = 0, j = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		char num_str[12];
		int is_negative = num < 0;

		if (is_negative)
		{
			write(1, "-", 1);
			num = -num;
			characters++;
		}
		while (num != 0)
		{
			num_str[i++] = '0' + (num % 10);
			num /= 10;
		}
		for (j = j - 1; j >= 0; j--)
		{
			write(1, &num_str[j], 1);
			characters++;
		}
		return (characters);
	}
}
