#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string of characters
 */

void puts2(char *str)
{
	int temp;

	for (temp = 0; str[temp]; temp++)
	{
		if (temp % 2 == 0)
		{
			_putchar(str[temp]);
		}
	}
	_putchar('\n');
}
