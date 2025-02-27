#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string of characters
 *
 */
void puts_half(char *str)
{
	int length;
	int half;

	for (length = 0; str[length]; length++)
	{
	}

	if (length % 2 == 0)
	{
		for (half = (length / 2); half < length ; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		for (half = ((length + 1) / 2); half < length ; half++)
		{
			_putchar(str[half]);
		}
	}
	_putchar('\n');
}
