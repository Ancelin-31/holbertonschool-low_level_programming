#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *@str: string of char
 * Return: 0
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string]; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
