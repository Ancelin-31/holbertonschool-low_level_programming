#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *@s : string of char
 *
 */
void print_rev(char *s)
{
	int gnirts;

	for (gnirts = 0; s[gnirts]; gnirts++)
	{
		while (gnirts != '\0')
		{
			_putchar(s[gnirts]);
			gnirts--;
		}
	_putchar('\n');
	}
}
