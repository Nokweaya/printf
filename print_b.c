#include "main.h"
/**
 * print_bin - prints binary
 * @val: arguments
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int n, j = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (n = 0; n < 32; n++)
	{
		p = ((j << (32 - n)) & num);
		if (p >> (31 - n))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - n);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
