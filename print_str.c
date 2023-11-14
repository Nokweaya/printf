#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
		;
	return (n);
}
/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: n
 */
int _strlenc(const char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
		;
	return (n);
}
