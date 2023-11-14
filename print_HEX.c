#include "main.h"
/**
 * print_HEX - print to hex
 * @val: value to be converted
 * Return: count
 */
int print_HEX(va_list val)
{
	int n, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (n = 0; n < count; n++)
	{
		array[n] = temp % 16;
		temp = temp / 16;
	}
	for (n = count - 1; n >= 0; n++)
	{
		if (array[n] > 9)
			array[n] = array[n] + 7;
		_putchar(array[n] + '0');
	}
	free(array);
	return (count);
}
