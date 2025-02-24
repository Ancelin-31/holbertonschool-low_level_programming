#include "main.h"

/**
 * more_numbers - prints 10 times from zero to fourteen
 * @i: number of times
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	char number;

	for (i = 0; i < 10; i++)
	{
		number = 0;

		for (; number < 15; number++)
		{
			if (number > 9)
			_putchar(number / 10 + '0');
		_putchar(number % 10 + '0');
		}
	_putchar('\n');
	}
}
