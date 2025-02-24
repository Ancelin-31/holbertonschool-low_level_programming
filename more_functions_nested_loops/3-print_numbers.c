#include "main.h"

/**
 * print_numbers - displays numbers from zero to nine
 * _putchar - puts character
 *
 * Return: 0
 */
void print_numbers(void)
{
	char number = 48;

	while (number <= 57)
	{
		_putchar(number);

		number++;
	}

_putchar('\n');
}
