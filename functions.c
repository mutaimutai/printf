#include "main.h"
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
 * int print_decimal-prints an integer
 * @any:arguments from variable list
 * Return: number of printed characters
 */
int print_decimal(va_list any)
{
int i = 0;
	int characters = 0;
	int out;
	int arr[10];
	char caleb[1];

	out = va_arg(args, int);

	while (numb != 0)
	{
		arr[i] = (out % 10);
		out = out / 10;
		if (out == 0)
			return -1;
	}

	for (i; i >= 0; i--)
	{
		caleb[0] = ('0' + arr[i]);
		out += write(1, x, 1);
	}

	return (out);
}
