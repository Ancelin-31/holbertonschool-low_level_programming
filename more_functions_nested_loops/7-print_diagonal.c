#include "main.h"

/**
 * print_diagonal - prints a diagonal of base n
 * @n: int
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i,j; 

	i = 0;

	if (n > 0)
	{
		while (n > 0)
		{
		j = i;
		while (j > 0)
		{
			_putchar(32);
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
