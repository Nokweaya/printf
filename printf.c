#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - mimics printf
 * @format: indentifier to look for
 * Return: integer
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_percentage},
		{"%d", print_dec}, {"%i", print_int}
	};

	va_list args;
	int i = 0, len = 0;
	int n;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		n = 5;
		while (n >= 0)
		{
			if (m[n].id[0] == format[i] && m[n].id[1] == format[i + 1])
			{
				len = len + m[n].f(args);
				i = i + 2;
				goto Here;
			}
			n--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
