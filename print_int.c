#include "main.h"
#include <stdio.h>
/**
 * _printf - Custom printf function with limited integer support.
 * @format: Format string containing %d or %i specifier.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
{
int num = va_arg(args, int);
count += printf("%d", num);
format += 2;
}
else
{
putchar(*format);
count++;
format++;
}
}
va_end(args);
return (count);
}
/**
 * main - Entry point for testing _printf with different specifiers.
 * Return: Always 0.
 */
int main(void)
{
int len;
len = _printf("Character: %c\n", 'H');
printf("Characters printed: %d\n\n", len);
len = _printf("String: %s\n", "Hello, World!");
printf("Characters printed: %d\n\n", len);
len = _printf("Percent: %%\n");
printf("Characters printed: %d\n\n", len);
len = _printf("Multiple specifiers: %c, %s, and %%\n", 'A', "string");
printf("Characters printed: %d\n\n", len);
len = _printf("Unknown specifier: %r\n");
printf("Characters printed: %d\n\n", len);
return (0);
}
