#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Custom printf function using _putchar.
 * @format: Format specifier string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	const char *ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			char *str;

			switch (*(ptr + 1))
			{
				case 'c':
				count += _putchar(va_arg(args, int));
				break;
				case 's':
				str = va_arg(args, char *);
				while (*str)
				{
				count += _putchar(*str++);
				}
				break;
			}
			ptr += 2;
		}
		else
		{
			count += _putchar(*ptr++);
		}
	}
	va_end(args);
	return (count);
}
