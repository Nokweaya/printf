#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Custom printf function with limited functionality.
 *
 * This function mimics the behavior of printf for the format specifiers:
 * - %c: Character
 * - %s: String
 * - %%: Percent sign
 *
 * It does not handle flag characters, field width, precision,length modifiers.
 *
 * @format: The format string containing the format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += putchar(va_arg(args, int));
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
count += putchar('%');
break;
}
}
else
{
count += putchar(*format);
}
format++;
}
va_end(args);
return (count);
}
