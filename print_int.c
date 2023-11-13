#include <stdarg.h>
#include "main.h"
/**
 * _printf - Custom printf function using _putchar.
 * @format: Format specifier string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
{
int count = 0;
va_list args;
const char *ptr = format;
va_start(args, format);
while (*ptr != '\0')
{
if (*ptr == '%')
{
switch (*(ptr + 1))
{
case 'c': count += _putchar(va_arg(args, int)); break;
case 's':
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
count += _putchar(*str);
str++;
}
break;
}
case '%': count += _putchar('%'); break;
default: break;
}
ptr += 2;
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
