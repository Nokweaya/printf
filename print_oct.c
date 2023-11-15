#include "main.h"
/**
 * print_oct - convert to octal
 * @val: variable parameter
 * Return: count
 */
int print_oct(va_list val)
{
	int n, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (n = 0; n < count; n++)
	{
		array[n] = temp % 8;
		temp = temp / 8;
	}
	for (n = count - 1; n >= 0; n--)
		_putchar(array[n] + '0');
	free(array);
	return (count);
}
