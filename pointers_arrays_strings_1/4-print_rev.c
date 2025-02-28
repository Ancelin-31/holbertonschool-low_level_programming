#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *@s : string of char
 *
 */
void print_rev(char *s)
{
	int string = 0;
	int gnirts;

	while (*(s + string) != '\0')
	{
		string++;
	}

	for (gnirts = string - 1; gnirts >= 0; gnirts--)
	{
		_putchar(s[gnirts]);
	}
	_putchar('\n');
}
