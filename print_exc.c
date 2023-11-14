#include "main.h"
/**
 * print_exc_string - print exclusive string
 * @val: value
 * Return: number of character printed
 */
int print_exc_string(va_list val)
{
	char *s;
	int n, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] < 32 || s[n] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[n];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);

		}
		else
		{
			_putchar(s[n]);
			len++;
		}
	}
	return(len);
}
