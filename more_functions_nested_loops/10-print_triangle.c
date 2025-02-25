#include "main.h"

/**
 * print_triangle - prints a triangle of int size
 * @size: int
 */
void print_triangle(int size)
{
	int h, i, j;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
			{
				_putchar(' ');
			}
			for (j = 0; j < h; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
