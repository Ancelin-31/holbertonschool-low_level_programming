#include "main.h"

/**
 * print_line - print a strait line of length n
 * @n: int
 *
 * Return : 0
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
