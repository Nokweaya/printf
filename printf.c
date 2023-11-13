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
		switch (*(ptr + 1))
		{
		case 'c':
		count += _putchar(va_arg(args, int));
		break;
		case 's':
		{

		char *str = va_arg(args, char *);

		while (*str != '\0')
		{
			count += _putchar(*str);
			str++;
		}
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			break;
		}
		ptr += 2;
		}
		}
		else
		{
			count += _putchar(*ptr);
			ptr++;
		}
	}
	va_end(args);
	return (count);
}
