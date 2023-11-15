#include "main.h"
/**
 * printf_string - print a string
 * @val: arguments
 * Return: the length of a string
 */
int printf_string(va_list val)
{
	char *str;
	int n;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (n = 0; n < length; n++)
			_putchar(str[n]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (n = 0; n < length; n++)
			_putchar(str[n]);
		return (length);
	}
}
